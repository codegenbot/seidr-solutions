#include <string>
#include <algorithm>

std::string encode(std::string message) {
    for (char& c : message) {
        if (std::isalpha(c)) {
            if (std::isupper(c)) {
                c = std::tolower(c);
            } else {
                c = std::toupper(c);
            }
            if (c == 'a') {
                c = 'c';
            } else if (c == 'e') {
                c = 'g';
            } else if (c == 'i') {
                c = 'k';
            } else if (c == 'o') {
                c = 'q';
            } else if (c == 'u') {
                c = 'w';
            }
        }
    }
    return message;
}