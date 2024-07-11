#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    std::string word;

    for (char c : str) {
        if (c == '-') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else if (c == ' ') {
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
            result += char(std::toupper(words[i][0]));
            result += words[i].substr(1);
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}