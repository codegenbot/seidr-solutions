#include <cctype>
#include <string>

bool iscnsonant(char c) {
    return !isalpha(c) || !isvowel(c);
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            char prevChar = word[i-1];
            if (iscnsonant(prevChar)) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}