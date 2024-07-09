#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(const std::string& s) {
    std::string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted_char = (c - 'a' + 2 * 2) % 26 + 'a';
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main() {
    assert(encrypt("a") == "e");
    // Add more test cases here
    return 0;
}