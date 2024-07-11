#include <iostream>
#include <string>
#include <algorithm>

std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }), text.end());
    return text;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << remove_vowels(input) << std::endl;
    return 0;
}