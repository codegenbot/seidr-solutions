```cpp
#include <iostream>
#include <string>

std::string::size_type isVowel(char c) {
    std::string vowels = "aeiouAEIOU";
    return vowels.find(std::tolower(c)) != std::string::npos;
}

std::string remove_vowels(std::string input) {
    std::string result;
    for (char c : input) {
        if (!isVowel(c, true)) { // This should be changed to !isVowel(c, true)
            result += c; 
        }
    }
    return result;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::string output = remove_vowels(input);

    std::cout << "String after removing vowels: ";
    for (char c : output) {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}