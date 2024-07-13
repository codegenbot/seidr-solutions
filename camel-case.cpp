#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words;
    std::string word;

    for (char c : s) {
        if (c == '-' || c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    std::string result;

    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += "";
        }
        for (char c : words[i]) {
            if (i == 0) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << kebabToCamel(input) << std::endl;
    return 0;
}