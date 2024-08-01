#include <iostream>
#include <cctype>

std::string findFirstPunct(const std::string& word) {
    for (int i = 0; i < word.size(); ++i) {
        if (ispunct(word[i])) return std::string(1, word[i]);
    }
    return "";
}

int main() {
    std::cout << findFirstPunct("Hello, World!") << std::endl;
    return 0;
}