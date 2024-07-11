#include <string>

string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i])) continue;
        if (isvowel(tolower(word[i]))) return string(1, tolower(word[i]));
        while (!isalpha(word[i-1]) && i > 0) --i;
        if (isvowel(tolower(word[i-1]))) return string(1, tolower(word[i-1]));
    }
    return "";
}