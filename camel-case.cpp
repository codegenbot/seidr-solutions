#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                output += toupper(c + 1);
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                output += " ";
            }
            firstWord = true;
        } else {
            if (!firstWord) {
                output += std::toupper(c);
                firstWord = true;
            } else {
                output += c;
            }
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input); 
    std::cout << camelCase(input) << std::endl;

    return 0;
}