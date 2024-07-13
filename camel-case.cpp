```cpp
#include <string>
#include <iostream>

std::string camelCase(std::string str) {
    std::string result = "";
    bool isNextUpper = false;
    for (char c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper && c != '-') {
                result += std::toupper(c);
                isNextUpper = true;
            } else if (c == '-') {
                continue;
            }
            if (c == ' ') {
                result += ' ';
                isNextUpper = false;
            }
        } else {
            if (!isNextUpper) {
                result += c;
                isNextUpper = true;
            } else {
                result += std::tolower(c);
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}