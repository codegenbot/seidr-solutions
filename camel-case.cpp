#include <iostream>
#include <string>

std::string toCamelCase(std::string s) {
    std::vector<std::string> words;
    std::size_t start = 0;
    
    for (std::size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            words.push_back(s.substr(start, i - start));
            start = i + 1;
        }
    }
    
    std::string result;
    
    for (std::size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            result += std::toupper(words[i][0]);
        else
            result += std::tolower(words[i][0]);
        
        result += &words[i][1];
    }
    
    return result;
}

int main() {
    int numTestCases;
    std::cin >> numTestCases;
    
    for (int i = 0; i < numTestCases; ++i) {
        std::string s;
        std::cin >> s;
        
        std::cout << toCamelCase(s) << std::endl;
    }
    
    return 0;
}