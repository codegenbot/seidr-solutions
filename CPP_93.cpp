#include <iostream>
#include <string>
#include <cctype>

std::string encode(std::string message) {
    for (int i = 0; i < message.length(); i++) {
        if (std::isalpha(message[i])) {
            if (std::islower(message[i])) {
                message[i] = std::toupper(message[i]);
            } else {
                message[i] = std::tolower(message[i]);
            }
            if (message[i] == 'a' || message[i] == 'e' || message[i] == 'i' || message[i] == 'o' || message[i] == 'u') {
                message[i] = message[i] + 2;
            }
        }
    }
    return message;
}