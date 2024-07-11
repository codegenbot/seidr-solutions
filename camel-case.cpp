#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : str) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    std::string result;
    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            if (i > 0)
                result += std::toupper(words[i][0]);
            else
                result += words[i];
        } else {
            result = words[i];
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