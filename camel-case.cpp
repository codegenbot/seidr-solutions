Here is the completed code:

#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            c = ' ';
        } else if (c == ' ') {
            if (!firstWord) {
                output.push_back(toupper(c));
            }
            firstWord = false;
        } else {
            if (!firstWord) {
                output.push_back(tolower(c));
            } else {
                output += toupper(c);
                firstWord = false;
            }
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}