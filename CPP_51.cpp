#include <iostream>
#include <string>

// Declare and define the remove_vowels function
std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!isvowel(c)) {
            result += c;
        }
    }
    return result;
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::cout << "After removing vowels: " << remove_vowels(text) << std::endl;
    return 0;
}