#include <iostream>
#include <cctype>

std::string ispunct(const std::string& word) {
    for (int i = 0; i < word.size(); ++i) {
        if (!std::isalnum(word[i])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}

std::string lastNonAlphanumericCharacter(const std::string& word) {
    for (int j = word.size() - 1; j >= 0; --j) {
        if (!std::isalnum(word[j])) {
            return word.substr(j);
        }
    }
    return "";
}