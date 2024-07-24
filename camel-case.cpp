#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '-') continue;
        if (!result.empty()) {
            if (capitalizeNext) {
                result += ' ';
                capitalizeNext = false;
            }
        } else {
            capitalizeNext = true;
        }
    }

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') continue;
        if (!result.empty() && capitalizeNext) {
            result += toupper(str[i]);
            capitalizeNext = false;
        } else {
            result += tolower(str[i]);
        }
    }

    return result;
}