```cpp
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;
    std::string currentWord;

    for (char c : str) {
        if (c == '-') {
            result += capitalizeNext ? toupper(currentWord[0]) + tolower(&currentWord[1]) : currentWord + " ";
            currentWord.clear();
            capitalizeNext = true;
        } else {
            currentWord += c;
            capitalizeNext = false;
        }
    }

    // Add the last word
    result += capitalizeNext ? toupper(currentWord[0]) + tolower(&currentWord[1]) : currentWord;

    return result;
}

int main() {
    std::string (const std::string&)input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    return 0;
}