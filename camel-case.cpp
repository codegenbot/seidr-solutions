#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string camelCase;
    std::string word;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                camelCase += word;
            }
            word.clear();
            firstWord = false;
        } else if (c == ' ') {
            camelCase += " ";
            firstWord = true;
        } else {
            if (firstWord) {
                camelCase += std::tolower(c);
                firstWord = false;
            } else {
                camelCase += std::toupper(c);
            }
        }
    }

    camelCase += word;

    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string camelCase = convertToCamelCase(input);
    std::cout << camelCase << std::endl;

    return 0;
}