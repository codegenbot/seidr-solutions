#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;
    std::string currentWord;

    for (char c : str) {
        if (c == '-') {
            if(capitalizeNext) {
                result += toupper(currentWord[0]);
                result += tolower(&currentWord[1]);
            } else {
                result += currentWord;
            }
            currentWord.clear();
            capitalizeNext = true;
        } else {
            currentWord += c;
            capitalizeNext = false;
        }
    }

    // Add the last word
    if(capitalizeNext) {
        result += toupper(currentWord[0]);
        result += tolower(&currentWord[1]);
    } else {
        result += currentWord;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    return 0;
}