Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string result;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            // Start of a new word
            if (!firstWord)
                result += std::toupper(c);
            else
                firstWord = false;
        } else if (c == ' ') {
            // New line, just add the space to the output string
            result += c;
        } else {
            // Just a normal character, check if it's the start of a new word
            if (!firstWord)
                result += std::tolower(c);
            else
                firstWord = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "camelCase version of the input is: " << camelCase(input) << std::endl;
    return 0;
}