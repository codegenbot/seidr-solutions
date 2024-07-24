Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool first = true;

    for (char c : input) {
        if (c == '-') {
            c = ' ';
        }
    }

    for (char c : input) {
        if (c == ' ') {
            output += c;
        } else {
            if (!first) {
                output[0] = toupper(output[0]);
            }
            first = false;
            output += c;
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