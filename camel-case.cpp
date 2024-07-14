#include <iostream>
#include <string>

std::string toCamelCase(const std::string& str) {
    std::string result;
    bool firstWord = true;

    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(toupper(c));
            }
            firstWord = true;
        } else {
            if (!firstWord) {
                result += c;
            } else {
                result += tolower(c);
            }
            firstWord = false;
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << toCamelCase(str) << std::endl;

    return 0;
}