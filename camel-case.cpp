#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            firstWord = true;
        } else {
            if (firstWord) {
                result += c;
            } else {
                result += char(tolower(c));
            }
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The camelCase version is: " << camelCase(input) << std::endl;
    return 0;
}