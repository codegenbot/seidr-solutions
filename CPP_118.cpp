#include <string>
#include <cctype>
#include <algorithm>

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' || word[i] == 'y') continue;
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) continue;
            if (ispunct(word[j]) || isdigit(word[j])) continue;
            if (word[j] == 'Y' || word[j] == 'y') continue;
            for (int k = j; k < i; ++k) {
                if (ispunct(word[k]) || isdigit(word[k])) break;
                if (isvowel(tolower(word[k]))) return string(1, tolower(word[k]));
            }
        }
    }
    return "";
}