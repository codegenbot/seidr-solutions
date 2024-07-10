#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : str) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += std::toupper(words[i][0]);
        else
            result += words[i];
        for (int j = 1; j < words[i].size(); ++j)
            result += std::tolower(words[i][j]);
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}