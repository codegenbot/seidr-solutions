#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;
    std::string word;

    for (char c : s) {
        if (std::isspace(c)) {
            // Append the current word to the result, and reset it
            if (!capitalize) {
                result += std::tolower(word[0]);
                word.erase(0, 1);
            }
            result += " " + word;
            capitalize = true;
            word.clear();
        } else if (c == '-') {
            // Start a new word
            capitalize = true;
        } else if (!capitalize) {
            word += c;
        } else {
            result += std::toupper(c);
            capitalize = false;
            word += c;
        }
    }

    // Append the last word to the result
    if (!capitalize) {
        result += std::tolower(word[0]);
        word.erase(0, 1);
    }
    result += word;

    return result;
}

int main() {
    std::string input;
    std::cin >> input;

    std::cout << camelCase(input) << std::endl;

    return 0;
}