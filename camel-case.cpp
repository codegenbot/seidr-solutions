#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool nextWord = true;

    for (char c : s) {
        if (c == '-') {
            nextWord = true;
        } else if (c == ' ') {
            nextWord = false;
        } else {
            if (!nextWord) {
                result.push_back(std::toupper(c));
                nextWord = true;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string s;
    while (true) {
        std::cout << "Enter a string in kebab-case (or 'stop' to finish): ";
        std::cin >> s;
        if (s == "stop") break;
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}