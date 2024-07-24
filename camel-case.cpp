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
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    if(std::cin >> std::ws && std::cin.getline(input.data(), input.max_size())) {
        std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    } else {
        std::cout << "Invalid input. Please try again." << std::endl;
    }
    return 0;
}