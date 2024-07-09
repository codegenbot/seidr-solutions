#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-' || c == ' ') { 
            if (!capitalize) {
                result += c;
            }
            capitalize = (c == ' ');
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false; 
        } else {
            result += tolower(c);
        }
    }

    return result;
}