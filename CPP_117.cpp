#include <iostream>
#include <vector>
#include <cassert>
#include <initializer_list>

bool isVowel(char c);
std::vector<std::string> select_words(const std::string& s, int n);

bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::vector<std::string> select_words(const std::string& s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            int consonantCount = 0;
            for (int j = 0; j < word.length(); j++) {
                if (std::isalpha(word[j]) && !isVowel(word[j])) {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    int consonantCount = 0;
    for (int j = 0; j < word.length(); j++) {
        if (std::isalpha(word[j]) && !isVowel(word[j])) {
            consonantCount++;
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}