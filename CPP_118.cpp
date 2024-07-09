#include <iostream>
#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char get_next_vowel(const std::string& word, char prev) {
    for (int i = 0; i < word.size(); ++i) {
        if (isvowel(word[i])) {
            return word[i];
        }
    }
    return '\0';
}

std::string get_closest_vowel(const std::string& word) {
    for (char c : word) {
        if (!isvowel(c)) {
            return std::string(1, get_next_vowel(word, c));
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    // ...
}