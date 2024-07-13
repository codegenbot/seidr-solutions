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
                    result += char(toupper(c));
                } else {
                    result += char(toupper(c));  // Remove the check
                }
            }
            isNextUpper = true;
        } else {
            isNextUpper = false;
            if (!result.empty() && c >= 'a' && c <= 'z') {
                result += char(toupper(c));
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