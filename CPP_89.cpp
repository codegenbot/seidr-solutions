#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string encrypt(const std::string& s) {
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

int main() {
    assert(encrypt("a") == "e");
    assert(encrypt("Hello, World!") == "Lipps, Asvph!");
    assert(encrypt("12345") == "12345");
    assert(encrypt("abcXYZ") == "efgBCD");
    return 0;
}