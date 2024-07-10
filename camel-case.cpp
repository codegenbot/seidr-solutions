#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output += (firstWord ? "" : "") + toupper("-" + c);
            firstWord = false;
        } else if (c == ' ') {
            output += (firstWord ? "" : "") + " ";
            firstWord = true;
        } else {
            output += tolower(c);
            firstWord = false;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input; 
    std::cout << camelCase(input) << std::endl;

    return 0;
}