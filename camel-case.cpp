#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            first = false;
            continue;
        }

        if (!first)
            result[0] = toupper(c);
        else
            result += c;

        first = true;
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;

    return 0;
}