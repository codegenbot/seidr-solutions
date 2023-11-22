#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string output;
    std::vector<std::string> words;
    std::string currentWord;

    for (char c : input) {
        if (c == '-') {
            words.push_back(currentWord);
            currentWord.clear();
        } else {
            currentWord += c;
        }
    }

    words.push_back(currentWord);

    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            words[i][0] = std::toupper(words[i][0]);
        }
        output += words[i];
    }

    return output;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = convertToCamelCase(input);
    std::cout << output << std::endl;

    return 0;
}