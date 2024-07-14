#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> words;
    size_t pos = 0;
    while ((pos = s.find(' ')) != std::string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    if (!s.empty())
        words.push_back(s);

    std::string result;
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
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}