#include <string>
#include <cctype>

string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = 0; i < n-1 && !isVowel(word[i]); i++) {
        if (!isConsonant(word[i])) {
            continue;
        }
        if (isVowel(word[i+1]) || (i<n-2 && isVowel(word[i+2]))) {
            return string(1, tolower(word[i+1]));
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