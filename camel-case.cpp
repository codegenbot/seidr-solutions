#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool isNextUpper = !str.empty();
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper) {
                if (c == '-') {
                    if (!result.empty()) {
                        result += c;
                    }
                } else {
                    if (!result.empty() && !isNextUpper) {
                        result += c;
                    }
                }
            }
            isNextUpper = true;
        } else {
            isNextUpper = false;
            if (isNextUpper || c == ' ') {
                result += std::toupper(c);
            } else {
                result += c;
            }
        }
    }
    return result;