#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                output[output.size() - 1] = toupper(output[output.size() - 1]);
            }
            output += " ";
        } else if (c == ' ') {
            firstWord = false;
            output += c;
        } else {
            output += tolower(c);
            firstWord = true;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;

    std::cout << "CamelCase representation: " << kebabToCamel(input) << std::endl;

    return 0;
}