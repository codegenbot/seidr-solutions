Here is the solution:

#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNextLetter = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNextLetter = true;
        } else if (capitalizeNextLetter) {
            result += toupper(c);
            capitalizeNextLetter = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}