```c++
#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool firstWord = true;

    for (char c : input) {
        if (c == '-') {
            output += (firstWord ? "" : "") + toupper(c + 1);
            firstWord = false;
        } else if (c == ' ') {
            output += (firstWord ? "" : "") + " ";
            firstWord = true;
        } else {
            output += c;
            firstWord = true;
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