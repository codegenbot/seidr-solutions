#include <cctype>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!result.empty()) {
                result += std::toupper(result.back());
            }
            if (c == '-') {
                result.push_back('-');
            } else {
                result.push_back(' ');
            }
        } else {
            if (!result.empty() && !std::isupper(c)) {
                result.insert(0, 1, std::tolower(c));
            } else {
                result += c;
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}