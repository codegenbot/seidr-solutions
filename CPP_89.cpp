#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = c + 4;
            if (islower(c)) {
                if (encrypted > 'z') {
                    encrypted = 'a' + (encrypted - 'z' - 1);
                }
            } else {
                if (encrypted > 'Z') {
                    encrypted = 'A' + (encrypted - 'Z' - 1);
                }
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}