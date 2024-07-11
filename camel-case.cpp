```c++
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;
    char nextChar;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                output.push_back(char(toupper(c)));
            } else {
                firstWord = false;
                if ((nextChar = input[output.size()]) != ' ') { 
                    output += char(tolower(nextChar));
                }
            }
        } else if (c == ' ') {
            continue;
        } else {
            if (!firstWord) {
                output.push_back(char(toupper(c)));
            } else {
                output += c;
                firstWord = false;
            }
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase: " << camelCase(input) << std::endl;

    return 0;
}