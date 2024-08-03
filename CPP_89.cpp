#include <iostream>
#include <string>
#include <cassert>

std::string encrypt(const std::string& s) {
    std::string encrypted = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char base = std::islower(c) ? 'a' : 'A';
            encrypted += (c - base + 2 * 2) % 26 + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main() {
    assert(encrypt("a") == "e");
    assert(encrypt("Hello, World!") == "Lipps, Asvph!");
    assert(encrypt("This is a test 123") == "Vjku ku c vguv 123");
    assert(encrypt("xyz") == "bcd");
    std::cout << "All test cases passed." << std::endl;
    return 0;
}