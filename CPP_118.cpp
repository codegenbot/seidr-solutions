#include <string>
#include <cctype>

string get_closest_vowel(string word) {
    int n = word.length();
    string closestVowel = "";
    for (int i = 0; i < n; i++) {
        if (isVowel(word[i])) {
            if (!closestVowel.empty()) {
                return closestVowel;
            }
            closestVowel = tolower(string(1, word[i]));
        } else {
            if (!closestVowel.empty()) {
                break;
            }
        }
    }
    return closestVowel;
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}