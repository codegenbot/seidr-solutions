#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& kebabCase) {
    std::string camelCase;
    bool capitalizeNext = false;

    for (char c : kebabCase) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCase += std::toupper(c);
            capitalizeNext = false;
        } else {
            camelCase += c;
        }
    }

    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output;
    std::string word;
    std::vector<std::string> words;

    for (char c : input) {
        if (c == ' ') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }
    words.push_back(word);

    for (int i = 0; i < words.size(); ++i) {
        output += kebabToCamel(words[i]);

        if (i != words.size() - 1) {
            output += ' ';
        }
    }

    std::cout << output << std::endl;

    return 0;
}