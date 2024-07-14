#include <iostream>
#include <string>

std::string toCamelCase(std::string input) {
    std::string output;
    bool capitalize = true;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            output += toupper(c);
            capitalize = false;
        } else {
            output += tolower(c);
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase equivalent is: " << toCamelCase(input) << std::endl;

    return 0;
}