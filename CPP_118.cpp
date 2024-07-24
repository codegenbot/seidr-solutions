#include <string>
#include <cctype>

string get_closest_vowel(string word) {
    int n = word.length();
    string closest_vowel = "";
    for (int i = n - 1; i > 0 && !isVowel(word[i]); i--) {
        if (isConsonant(word[i-1]) && isVowel(word[i])) {
            closest_vowel = tolower(string(1, word[i]));
            break;
        }
    }
    return closest_vowel;

}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}