#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words = split(s, " ");
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

std::vector<std::string> split(const std::string& s, const char& c) {
    std::vector<std::string> v;
    size_t pos = 0;
    while ((pos = s.find(c)) != std::string::npos) {
        v.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    v.push_back(s);
    return v;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl; // nospaceordash
    std::cout << camelCase("two-words") << std::endl; // twoWords
    std::cout << camelCase("two words") << std::endl; // two words
    std::cout << camelCase("all separate words") << std::endl; // all separate words
    return 0;
}