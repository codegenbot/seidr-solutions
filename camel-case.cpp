#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    size_t pos = 0;

    while ((pos = str.find(' ')) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }

    if (!str.empty()) {
        words.push_back(str);
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += std::toupper(words[i][0]);
        else
            result += words[i];
        if (i < words.size() - 1)
            result += " ";
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