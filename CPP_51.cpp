```cpp
#include <iostream>
#include <string>

bool isVowel(char c) {
    std::string vowels = "aeiouAEIOU";
    return vowels.find(std::tolower(c)) != std::string::npos;
}

std::string remove_vowels(std::string input) {
    std::string result;
    for (char c : input) {
        if (!isVowel(c)) {
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

    std::cout << "String after removing vowels: " << output.c_str() << std::endl;

    return 0;
}