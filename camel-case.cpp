#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    bool first = true;

    for (char c : input) {
        if (c == '-') {
            continue;
        }
        if (!first) {
            output[0] = toupper(output[0]);
        } else {
            first = false;
        }
        output += c;
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase version is: " << camelCase(input) << std::endl;

    return 0;
}