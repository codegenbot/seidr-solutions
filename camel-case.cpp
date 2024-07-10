#include <string>
#include <cctype>

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            if (!result.empty()) {
                result += ' ';
            }
            result += toupper(c);
            capitalize = false;
        } else if (c == ' ') {
            capitalize = true;
        } else {
            result += tolower(c);
        }
    }

    return result;
}