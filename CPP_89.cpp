```cpp
#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = ((c - base + 2 * 26) % 26) + base;
        }
        result += c;
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Encrypted String: " << encrypt(input) << std::endl;
    return 0;
}