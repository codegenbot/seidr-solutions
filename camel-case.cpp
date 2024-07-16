#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (!firstWord) {
                result += char(toupper(s[i + 1]));
                i++;
            } else {
                firstWord = false;
            }
        } else if (s[i] == ' ') {
            if (!firstWord) {
                result += char(toupper(s[i + 1]));
                i++;
            } else {
                firstWord = false;
            }
        } else {
            if (firstWord)
                firstWord = false;
            result += s[i];
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