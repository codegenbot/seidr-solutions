#include <iostream>
#include <string>
#include <vector>

std::string convertToCamelCase(const std::string& input) {
    std::string output;
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

    if (!word.empty()) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        if (i == 0) {
            output += words[i];
        } else {
            output += words[i][0] - 'a' + 'A';
            output += words[i].substr(1);
        }
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