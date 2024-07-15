#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;

    for (char c : str) {
        if (c == '-') {
            if (!firstWord)
                result += std::toupper(c);
            else
                firstWord = false;
        } else if (c == ' ') {
            if (!firstWord)
                result += std::toupper(c);
            else
                firstWord = false;
        } else {
            if (!firstWord) {
                result += std::tolower(c);
                firstWord = true;
            } else
                result += c;
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter the string in kebab-case: ";
    std::cin >> str;
    std::cout << "The camelCase equivalent is: " << camelCase(str) << std::endl;

    return 0;
}