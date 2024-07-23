#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result.push_back(toupper(result[0]));
                } else {
                    result.insert(0, 1, tolower(c));
                }
                capitalizeNext = true;
                result.erase(0, 1);
            }
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return capitalizeNext ? result : (result + toupper(result[0]));
}