#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;
    for (const auto& c : split(str, '-')) {
        if (!result.empty()) {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        } else {
            result = tolower(c);
            capitalizeNext = true;
        }
    }
    return result;
}