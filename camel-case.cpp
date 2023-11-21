#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& kebabCase) {
    std::string camelCase;
    std::vector<std::string> words;
    std::string word;

    for (char c : kebabCase) {
        if (c == '-') {
            words.push_back(word);
            word.clear();
        } else {
            word += c;
        }
    }

    words.push_back(word);

    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            camelCase += words[i][0] - 'a' + 'A';
            camelCase += words[i].substr(1);
        } else {
            camelCase += words[i];
        }
    }

    return camelCase;
}

int main() {
    std::string kebabCase;
    std::getline(std::cin, kebabCase);

    std::string camelCase = kebabToCamel(kebabCase);
    std::cout << camelCase << std::endl;

    return 0;
}