#include <iostream>
#include <string>
#include <cctype>

std::string encode(const std::string& message) {
    std::string encoded;
    for (int i = 0; i < message.size(); ++i) {
        char c = message[i];
        if (isalpha(c)) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
            encoded += c;
        } else {
            encoded += c;
        }
    }
    return encoded;
}