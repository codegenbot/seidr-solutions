#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // Skip the dash
            if (!firstWord) {
                result += char(toupper(str[i])); // Convert to upper case
            } else {
                firstWord = false;
            }
        } else if (str[i] == ' ') {
            continue; // Just skip the space
        } else {
            if (!firstWord) {
                result += char(tolower(str[i])); // Convert to lower case
            } else {
                result += str[i]; // First word, just add it as is
                firstWord = false;
            }
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase conversion is: " << camelCase(input) << std::endl;
    return 0;
}