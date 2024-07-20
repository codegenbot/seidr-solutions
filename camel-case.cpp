#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool upper = true;

    for (char c : str) {
        if (c == '-') {
            upper = true;
        } else if (upper) {
            result += toupper(c);
            upper = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}