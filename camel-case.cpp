#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool first = true;

    for (char c : input) {
        if (c == '-') {
            if (!first) {
                output.push_back(char(toupper(input[output.size() + 1])));
            }
            output += c;
            first = false;
        } else if (c == ' ') {
            if (!first) {
                output.push_back(char(toupper(c)));
            } else {
                output += c;
            }
            first = true;
        } else {
            output += c;
            first = false;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Camel Case: " << camelCase(input) << std::endl;

    return 0;
}