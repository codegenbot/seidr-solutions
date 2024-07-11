#include <iostream>
#include <string>

std::string encrypt(const std::string &s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char encrypted = 'a' + (c - 'a' + 2 * 2) % 26;
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