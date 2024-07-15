#include <string>
#include <cctype>

std::string encode(std::string message) {
    for (char &c : message) {
        if (std::isalpha(c)) {
            if (std::isupper(c)) {
                c = std::tolower(c);
            } else {
                c = std::toupper(c);
            }
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2;
            }
        }
    }
    return message;
}