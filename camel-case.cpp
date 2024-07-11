#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord)
                output.push_back(char(toupper(c)));
            else
                firstWord = false;
        } else if (c == ' ') {
            output += char(toupper(c));
            firstWord = true;
        } else {
            if (!firstWord)
                output.push_back(char(tolower(c)));
            else
                firstWord = false;
        }
    }

    return output;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}