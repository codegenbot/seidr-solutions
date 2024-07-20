#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            inWord = true;
        } else {
            if (!inWord && c != '-') { // Start of a new word
                inWord = true;
                result += std::toupper(c);
            } else if (c != '-') {
                result += std::tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input = "s-lsdsy-uhhe";
    std::cout << camelCase(input) << std::endl;
    return 0;
}