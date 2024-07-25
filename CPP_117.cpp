#include <iostream>
#include <vector>
#include <string>

bool issame(char a, char b) {
    return std::tolower(a) == std::tolower(b);
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> words;
    std::string currentWord;
    int consonantCount = 0;

    for (char c : s) {
        if (c != ' ') {
            if (!issame(c, 'a') && !issame(c, 'e') && !issame(c, 'i') && !issame(c, 'o') && !issame(c, 'u')) {
                consonantCount++;
            }
            currentWord += c;
        } else {
            if (consonantCount == n) {
                words.push_back(currentWord);
            }
            currentWord = "";
            consonantCount = 0;
        }
    }

    if (consonantCount == n) {
        words.push_back(currentWord);
    }

    return words;
}