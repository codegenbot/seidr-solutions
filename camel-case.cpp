#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool isNextUpper = false;
    for (char c : str) {
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
            result += std::isupper(c) ? (char)(std::tolower(c)) : c;
        }
    }
    return result;