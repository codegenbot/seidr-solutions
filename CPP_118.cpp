#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isVowel(word[i])) return string(1, tolower(word[i]));
        while (!isalpha(word[i-1]) && i > 0) --i;
        if (isVowel(word[i-1])) return string(1, tolower(word[i-1]));
    }
    return "";
}