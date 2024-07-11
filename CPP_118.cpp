#include <algorithm>

string get_closest_vowel(string word) {
    int i = word.size() - 1;
    while (i > 0 && !isVowel(word[i])) {
        i--;
    }
    if (i <= 0) return "";
    for (int j = i; j >= 0 && !isVowel(word[j]); j--) {
        if (j + 1 < i || isVowel(word[j + 1]))
            return word.substr(j, 1);
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}