#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output.push_back(char(toupper(input[++input.find(c)])));
            while (input.find('-') != input.npos) {
                input.erase(input.find('-'), 1);
            }
        } else if (!firstWord && !std::isspace(c)) {
            output.push_back(char(toupper(c)));
        } else if (!firstWord) {
            output.push_back(c);
        } else {
            firstWord = false;
            if (c != ' ') {
                output.push_back(char(tolower(c)));
            }
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase representation is: " << camelCase(input) << std::endl;
    return 0;
}