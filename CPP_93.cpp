#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string encode(std::string message){
    for (char &c : message) {
        if (std::isalpha(c)) {
            c = std::isupper(c) ? std::tolower(c) : std::toupper(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = c + 2;
            }
        }
    }
    return message;
}