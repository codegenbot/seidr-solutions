```c
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;
    std::string currentWord;

    for (char c : str) {
        if (c == '-') {
            if (!currentWord.empty()) {
                result += capitalizeNext ? toupper(currentWord[0]) + tolower((char*)&currentWord[1]) : currentWord + " ";
                currentWord.clear();
            }
            capitalizeNext = true;
        } else {
            currentWord += c;
            capitalizeNext = false;
        }
    }

    // Add the last word
    if (!currentWord.empty()) {
        result += capitalizeNext ? toupper(currentWord[0]) + tolower((char*)&currentWord.substr(1)) : currentWord;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Error: Input cannot be empty." << std::endl;
    } else {
        std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    }
    return 0;
}