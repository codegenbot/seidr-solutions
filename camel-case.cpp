#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string result;
    std::string word;
    bool isFirstWord = true;

    for (char c : input) {
        if (c == '-') {
            if (!isFirstWord) {
                result += word;
                word.clear();
            }
            isFirstWord = false;
        } else {
            if (isFirstWord) {
                word += std::tolower(c);
                isFirstWord = false;
            } else {
                word += std::toupper(c);
            }
        }
    }

    result += word;
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = convertToCamelCase(input);
    std::cout << output << std::endl;

    return 0;
}