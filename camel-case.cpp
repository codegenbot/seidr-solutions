#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (getline(ss, word, '-')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }

    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            words[i][0] = toupper(words[i][0]);
        }
    }

    std::string result;
    for (const auto& word : words) {
        result += word;
        if (i + 1 < words.size()) {
            result += " ";
        }
        ++i;
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