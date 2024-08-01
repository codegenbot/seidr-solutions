#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string encrypt(const std::string &s) {
    std::string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char encryptedChar = (c - 'a' + 2 * 2) % 26 + 'a';
            result += encryptedChar;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}