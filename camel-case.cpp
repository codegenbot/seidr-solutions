#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool isNextUpper = (str.empty()) ? false : true;
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper) {
                if (c == '-') {
                    if (!result.empty()) {
                        result += std::toupper(c);
                    }
                } else {
                    if (!result.empty() && !isNextUpper) {
                        result += ' ';
                    }
                }
            }
            isNextUpper = true;
        } else {
            isNextUpper = false;
            if (c >= 'a' && c <= 'z') {
                result += std::toupper(c);
            } else {
                result += c;
            }
        }
    }
    return result;
}

int main() {
    while (std::getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}