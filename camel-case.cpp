#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    std::string word = "";
    
    for (char c : str) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += std::string(1, toupper(words[i][0]));
            result += std::string(words[i].erase(0, 1));
        } else {
            result += words[i];
        }
    }
    
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << '\n';
    std::cout << camelCase("two-words") << '\n';
    std::cout << camelCase("two words") << '\n';
    std::cout << camelCase("all separate words") << '\n';
    
    return 0;
}