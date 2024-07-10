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
        } else if (c != ' ') {
            if (c >= 'a' && c <= 'z') {
                result += char(c - ('a' - 'A'));
            } else {
                result += c;
            }
            capitalize = false;
        } else {
            capitalize = true;
        }
    }

    return result;
}