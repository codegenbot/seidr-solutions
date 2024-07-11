#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words;
    std::stringstream ss(s);
    std::string word;

    while (ss >> word) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }

    std::string result = "";
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += charToUpper(words[i][0]) + words.substr(i).c_str();
        } else {
            result += words[0];
        }
    }

    return result;
}

char toUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return static_cast<char>(c - ('a' - 'A'));
    }
    return c;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}