#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool nextWord = true;

    for (char c : str) {
        if (c == '-') {
            nextWord = true;
        } else if (c == ' ') {
            nextWord = false;
        } else {
            if (!nextWord) {
                result += std::toupper(c);
                nextWord = true;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    int numCases;
    std::cin >> numCases;

    for (int i = 0; i < numCases; ++i) {
        std::string str;
        std::cin >> str;
        std::cout << camelCase(str) << std::endl;
    }

    return 0;
}