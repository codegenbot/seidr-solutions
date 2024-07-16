#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = {};
    if (str.find(' ') != std::string::npos) {
        size_t pos = 0;
        while ((pos = str.find(' ')) != std::string::npos) {
            words.push_back(str.substr(0, pos));
            str.erase(0, pos + 1);
        }
    } else {
        words.push_back(str);
    }

    std::string result = {};
    for (const auto& word : words) {
        if (!word.empty()) {
            if (!result.empty())
                result += char(std::toupper(word[0]));
            else
                result += word;
            for (size_t i = 1; i < word.length(); ++i)
                result += char(std::tolower(word[i]));
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