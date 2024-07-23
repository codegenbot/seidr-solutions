#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result;
    bool firstWord = true;

    for (char c : s) {
        if (c == '-') {
            if (!firstWord) {
                result.push_back(char(toupper(c)));
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result.push_back(char(toupper(c)));
            }
            firstWord = true;
        } else {
            if (!firstWord) {
                result.push_back(tolower(c));
            } else {
                result += c;
            }
            firstWord = false;
        }
    }

    return result;
}

int main() {
    std::string s;
    while (true) {
        std::cout << "Enter a string in kebab-case (or 'q' to quit): ";
        std::cin >> s;
        if (s == "q") break;
        std::cout << camelCase(s) << "\n";
    }
    return 0;
}