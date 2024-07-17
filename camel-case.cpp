#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    for (char c : s) {
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
            if (firstWord) {
                result += c;
            } else {
                result += char(tolower(c));
            }
        }
    }
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << camelCase(s) << std::endl;
    return 0;
}