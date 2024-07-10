#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output += char(toupper(input[++input.find(c)]));
            while (input.find(c) != input.nfind(c)) {
                input.erase(input.find(c), 1);
            }
        } else if (!firstWord && c == ' ') {
            output.push_back(char(toupper(c)));
        } else {
            output += c;
        }

        firstWord = false;
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;

    return 0;
}