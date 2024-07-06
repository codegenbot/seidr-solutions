```cpp
#include <iostream>
#include <string>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char baseChar = isupper(c) ? 'A' : 'a';
            c = ((c - baseChar + 3) % 26) + baseChar;
        }
        result += c;
    }
    return result;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    std::cout << "Encrypted string: " << encrypt(input) << std::endl;
    return 0;
}