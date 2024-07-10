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
    for (int i = words.size() - 1; i >= 0; --i) {
        if (i > 0) {
            char firstChar = std::toupper(words[i][0]);
            result += firstChar;
            result += std::string(1, words[i][1]);
        } else {
            result += words[i];
        }
    }

    return result;
}

int main() {
    // Test cases
    std::cout << kebabToCamel("nospaceordash") << std::endl; 
    std::cout << kebabToCamel("two-words") << std::endl; 
    std::cout << kebabToCamel("two words") << std::endl; 
    std::cout << kebabToCamel("all separate words") << std::endl; 

    return 0;
}