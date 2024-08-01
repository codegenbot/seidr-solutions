#include <iostream>
#include <string>

std::string toCamelCase(const std::string& input) {
    std::string output;
    size_t pos = 0;

    while (pos < input.size()) {
        if (input[pos] == '-') {
            pos++; // Skip the dash
            while (pos < input.size() && input[pos] == ' ') {
                pos++; // Skip the space
            }
            output += std::toupper(input[pos]);
            pos++;
        } else if (input[pos] == ' ') {
            while (pos < input.size() && input[pos] == ' ') {
                pos++; // Skip the spaces
            }
            output += std::tolower(input[pos]);
            pos++;
        } else {
            output += std::tolower(input[pos]);
            pos++;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << toCamelCase(input) << std::endl;

    return 0;
}