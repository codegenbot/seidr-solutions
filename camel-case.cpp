#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : input) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else if (c == ' ') {
            continue;
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
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    return 0;
}