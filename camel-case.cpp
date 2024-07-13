#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            if (capitalize) {
                result += ' '; // Add space before the next word
                capitalize = true; // Capitalize the next character
            } else {
                result += c; // Just add the hyphen as is
            }
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}