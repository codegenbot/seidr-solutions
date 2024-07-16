#include <iostream>
#include <string>
#include <vector>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    size_t start = 0;

    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == '-') {
            words.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    bool capitalizeNextWord = true;

    for (const auto& word : words) {
        if (capitalizeNextWord) {
            result += toupper(word[0]);
            result += std::string(word.begin() + 1, word.end());
            capitalizeNextWord = false;
        } else {
            result += word;
            capitalizeNextWord = true;
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cout << "Enter a string: ", std::getline(std::cin, str)) {
        std::cout << "camelCase: " << camelCase(str) << std::endl;
    }
    return 0;
}