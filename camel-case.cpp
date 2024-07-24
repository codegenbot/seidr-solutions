#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string result = "";
    bool firstWord = true;
    bool capitalNextWord = false;

    for (char c : input) {
        if (c == '-') {
            capitalNextWord = !capitalNextWord;
        } else if (c == ' ') {
            firstWord = true;
            capitalNextWord = false;
        } else {
            if (!firstWord) {
                result += capitalNextWord ? char(toupper(c)) : char(tolower(c));
            } else {
                result += c;
            }
            firstWord = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The camelCase version is: " << camelCase(input) << std::endl;
    return 0;
}