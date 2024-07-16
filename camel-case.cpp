#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            firstWord = false;
            continue;
        }
        if (!firstWord) {
            output.push_back(char(toupper(c)));
        } else {
            output += tolower(c);
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Camel case: " << camelCase(input) << std::endl;

    return 0;
}