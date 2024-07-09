#include <string>

string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(tolower(word[i]))) return string(1, tolower(word[i]));
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) break;
            if (isvowel(tolower(word[j]))) return string(1, tolower(word[j]));
        }
    }
    return "";
}