#include <cctype>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool isNextUpper = false;
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper) {
                if (c == '-') {
                    result += std::toupper(c);
                } else {
                    if (!result.empty()) {
                        result += ' ';
                    }
                }
            }
            isNextUpper = true;
        } else {
            isNextUpper = false;
            if (!result.empty() && c >= 'a' && c <= 'z') {
                result += std::toupper(c);
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