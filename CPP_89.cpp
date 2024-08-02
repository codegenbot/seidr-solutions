#include <iostream>
#include <cctype>
#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + 2 * 26) % 26 + base;
        }
        result += c;
    }
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "Encrypted string: " << encrypt(s) << std::endl;
    return 0;
}