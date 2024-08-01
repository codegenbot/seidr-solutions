#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int i = word.length() - 1;
    while (i >= 0 && !isVowel(word[i])) {
        i--;
    }
    if (i < 0) return "";
    for (int j = i; j > 0; j--) {
        if (!isVowel(word[j-1]) && isVowel(word[j])) {
            return std::string(1, word[j]);
        }
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}