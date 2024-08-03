#include <iostream>
#include <string>
#include <cctype>

std::string encrypt(std::string s) {
    std::string encrypted = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char base = std::isupper(c) ? 'A' : 'a';
            encrypted += (c - base + 2 * 2) % 26 + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}