#include <string>
#include <cctype>

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalize) {
                    result += toupper(result.back());
                    capitalize = false;
                }
                result.push_back(' ');
            }
        } else if (capitalize) {
            if (!result.empty()) {
                result += ' ';
            }
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
            capitalize = true;
        }
    }

    // Remove trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}