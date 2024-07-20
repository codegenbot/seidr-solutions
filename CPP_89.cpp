#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = (c - 'a' + 4) % 26 + 'a';
            result += encrypted;
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