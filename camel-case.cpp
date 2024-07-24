```c++
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;
    std::string currentWord;

    for (char c : str) {
        if (c == '-') {
            if (!currentWord.empty()) {
                if (capitalizeNext) {
                    result += toupper(currentWord[0]);
                    currentWord.erase(0, 1);
                }
                result += tolower((char*)&currentWord[0]);
            }
            currentWord.clear();
            capitalizeNext = true;
        } else {
            currentWord += c;
            capitalizeNext = false;
        }
    }

    if (!currentWord.empty()) {
        if (capitalizeNext) {
            result += toupper(currentWord[0]);
            currentWord.erase(0, 1);
        }
        result += tolower((char*)&currentWord[0]);
    } else {
        result = "Invalid input. Please enter a string in kebab-case.";
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "The camelCase equivalent is: Invalid input. Please enter a string in kebab-case." << std::endl;
    } else {
        std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    }
    return 0;
}