#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!firstWord) {
                output.push_back(char(toupper(c)));
            }
            firstWord = false;
        } else if (c == ' ') {
            output += char(toupper(c));
            firstWord = true;
        } else {
            output += c;
        }
    }

    return output;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}