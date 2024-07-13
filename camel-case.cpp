#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if (!capitalize) {
                result += toupper(str.substr(str.find(c) + 1, 1));
                capitalize = true;
            }
            result += ' ';
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}