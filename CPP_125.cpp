#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(std::string input);

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> split_words(std::string input) {
    std::vector<std::string> words;
    std::string word;
    for (char c : input) {
        if (isalpha(c)) {
            word += c;
        } else if (!word.empty()) {
            words.push_back(word);
            word.clear();
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(split_words("Hello"), std::vector<std::string>{"Hello"}));
    assert(issame(split_words("Hello, World!"), std::vector<std::string>{"Hello", "World"}));
    assert(issame(split_words("Hello! How are you?"), std::vector<std::string>{"Hello", "How", "are", "you"}));
    assert(issame(split_words("a b c d e f g h i j k l m n o p q r s t u v w x y z"), std::vector<std::string>{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}));
    return 0;
}