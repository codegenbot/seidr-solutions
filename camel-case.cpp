#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;
    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }
    return result;
}

int main() {
    std::string str, finalResult;
    while (getline(std::cin, str)) {
        size_t prevSpace = 0;
        bool capitalizeNext = true;
        for (size_t i = 0; i < str.size(); ++i) {
            if (str[i] == '-') {
                capitalizeNext = true;
            } else {
                if (capitalizeNext) {
                    finalResult += toupper(str[i]);
                    capitalizeNext = false;
                } else {
                    finalResult += tolower(str[i]);
                }
            }
        }
        if (!finalResult.empty()) {
            std::cout << camelCase(finalResult) << std::endl;
        }
        finalResult.clear();
    }
    return 0;
}