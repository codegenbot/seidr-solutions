#include <string>
#include <cctype>

string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = 0; i < n && !isVowel(word[i]); i++) {
        if (isConsonant(word[i])) {
            for (int j = i + 1; j < n; j++) {
                if (isVowel(word[j])) {
                    return string(1, tolower(word[j]));
                }
            }
        }
    }
    for (int i = n - 1; i >= 0 && !isVowel(word[i]); i--) {
        if (isConsonant(word[i])) {
            for (int j = i - 1; j >= 0; j--) {
                if (isVowel(word[j])) {
                    return string(1, tolower(word[j]));
                }
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}