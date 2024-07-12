#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream ss(str);
    std::string result = "";
    bool capitalizeNextWord = true;

    while (ss >> str) {
        if (capitalizeNextWord) {
            result += toupper(str[0]);
            capitalizeNextWord = false;
        } else {
            result += tolower(str[0]);
        }
        result += str.substr(1); // add the rest of the word
        if (capitalizeNextWord) {
            capitalizeNextWord = false;
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "camelCase: " << camelCase(str) << std::endl;
    return 0;
}