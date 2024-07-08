```cpp
#include <iostream>
#include <string>

std::string remove_vowels(std::string str) {
    std::string result;
    for (char c : str) {
        if (!isVowel(c)) {
            result += c;
        }
    }
    return result;
}

bool isVowel(char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    return false;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "String after removing vowels: ";
    try {
        std::cout << remove_vowels(input);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    return 0;
}