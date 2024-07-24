#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (std::getline(ss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }

    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += std::toupper(words[i][0]);
            result.resize(result.size() - 1); // remove the first char
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