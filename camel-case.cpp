#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> words;
    size_t start = 0;

    for(size_t i = 0; i <= s.size(); ++i) {
        if(i == s.size() || (s[i] == ' ' && s[i-1] != '-')) {
            words.push_back(s.substr(start, i - start));
            start = i+1;
        }
    }

    std::string result;
    for(size_t i = 0; i < words.size(); ++i) {
        if(i > 0)
            result += char(toupper(words[i][0]));
        else
            result += words[i];
        if(i < words.size() - 1)
            result += words[i+1];
    }

    return result;
}

int main() {
    std::string s;
    while(std::cin >> s) {
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}