#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    size_t start = 0;

    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || (s[i] == '-' && s[i + 1] != '-')) {
            std::string word = s.substr(start, i - start);
            
            if (!firstWord) {
                result += toupper(word[0]);
                for (size_t j = 1; j < word.size(); ++j) {
                    result += tolower(word[j]);
                }
            } else {
                result += tolower(word);
            }
            
            firstWord = false;
            start = i + 1;
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