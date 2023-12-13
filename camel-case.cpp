#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string result;
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

    for (size_t i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += words[i][0] - 'a' + 'A';
            result += words[i].substr(1);
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::cout << convertToCamelCase(input) << std::endl;

    return 0;
}