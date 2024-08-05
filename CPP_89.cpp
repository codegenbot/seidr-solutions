#include <iostream>
#include <string>

std::string encrypt(std::string s); // Function declaration

int main() {
    assert(encrypt("a") == "e");
    // Add more test cases if needed
    return 0;
}

std::string encrypt(std::string s) {
    std::string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            encrypted += ((c - base + 2 * 2) % 26) + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}