#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            if (!firstWord) {
                result += char(toupper(str[++i]));
            } else {
                firstWord = false;
            }
        } else if (str[i] == ' ') {
            if (!firstWord) {
                result += char(toupper(str[i + 1]));
                i++;
            } else {
                firstWord = false;
            }
        } else {
            if (!firstWord) {
                result += str[i];
            } else {
                result += tolower(str[i]);
                firstWord = false;
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter the string (e.g., 'nospaceordash'): ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;

    return 0;
}