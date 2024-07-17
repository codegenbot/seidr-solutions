#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words;
    size_t pos = 0;

    while ((pos = s.find(" ")) != std::string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }

    if (!s.empty()) {
        words.push_back(s);
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += char(std::toupper(words[i][0]));
        else
            result += words[i];
        for (size_t j = 1; j < words[i].size(); ++j) {
            result += char(std::tolower(words[i][j]));
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}