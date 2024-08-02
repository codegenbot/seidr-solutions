#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;

    while (true) {
        std::cout << "Enter a string in kebab-case (or 'quit' to finish): ";
        std::cin >> input;

        if (input == "quit") break;

        std::cout << "The equivalent camelCase string is: " << kebabToCamel(input) << '\n';
    }

    return 0;
}