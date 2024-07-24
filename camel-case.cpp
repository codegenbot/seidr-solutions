#include <string>

std::string camelCase(std::string input) {
    std::string result;
    bool capitalize = true;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}