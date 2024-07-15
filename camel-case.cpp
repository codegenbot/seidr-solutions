#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    bool first = true;

    for (char c : input) {
        if (c == '-') {
            if (!first) {
                output.push_back(char(toupper(c)));
            }
            first = false;
        } else if (c == ' ') {
            output.push_back(char(toupper(c)));
            first = true;
        } else {
            if (!first) {
                output.push_back(char(tolower(c)));
            } else {
                output += c;
            }
            first = false;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}