#include <iostream>
#include <string>
#include <algorithm>

std::string encode(std::string message) {
    std::transform(message.begin(), message.end(), message.begin(), [](char c) {
        if (std::isalpha(c)) {
            if (std::islower(c)) {
                return std::toupper(c);
            } else {
                return std::tolower(c);
            }
        } else if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' ||
                   std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            return (c + 2 > 'z') ? c + 2 - 26 : c + 2;
        }
        return c;
    });

    return message;
}