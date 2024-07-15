#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    std::string word;

    for (char c : str) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else if (c == ' ') {
            continue;
        } else {
            word += c;
        }
    }

    if (!word.empty())
        words.push_back(word);

    std::string result;

    for (int i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += std::toupper(words[i][0]);
        else
            result += words[i];
        for (int j = 1; j < words[i].size(); ++j)
            result += words[i][j];
        if (i < words.size() - 1)
            result += " ";
    }

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, str);
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}