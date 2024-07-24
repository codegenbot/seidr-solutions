#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '-') continue;
        capitalizeNext = true;
        result += ' ';
    }
    for (int i = 0; i < str.size(); i++) {
        if (capitalizeNext) {
            result += toupper(str[i]);
            capitalizeNext = false;
        } else {
            result += tolower(str[i]);
        }
        if (str[i] == '-') capitalizeNext = true;
    }

    return result;
}