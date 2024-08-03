#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char encrypted = 'a' + (c - 'a' + 2 * 2) % 26;
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a string to encrypt: ";
    std::string input;
    std::cin >> input;
    std::cout << "Encrypted string: " << encrypt(input) << std::endl;
    return 0;
}