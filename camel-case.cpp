#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(std::string input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord)
                output += char(toupper(c));
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord)
                output += ' ';
            firstWord = false;
        } else {
            output += c;
            firstWord = true;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Camel case: " << kebabToCamel(input) << std::endl;

    return 0;
}