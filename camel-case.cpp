#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }

    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += (char)std::toupper(words[i][0]);
            result += words[i].substr(1);
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}