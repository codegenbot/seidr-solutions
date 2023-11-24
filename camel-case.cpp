#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string result;
    std::vector<std::string> words;
    std::string word;

    for (char c : input) {
        if (c == '-') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }

    words.push_back(word);

    for (const std::string& word : words) {
        if (result.empty()) {
            result += word;
        } else {
            result += std::toupper(word[0]);
            result += word.substr(1);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = convertToCamelCase(input);
    std::cout << output << std::endl;

    return 0;
}