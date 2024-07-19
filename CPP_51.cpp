```cpp
#include <iostream>
#include <string>

bool isVowel(char c) {
    std::string vowels = "aeiouAEIOU";
    return std::string(1, std::tolower(c)).find(c) == 0;
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

int programMain() {
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