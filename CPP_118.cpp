#include <string>

string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) continue;
        if (strchr("aeiouAEIOU", tolower(word[i])) != nullptr)
            return word.substr(i);
    }
    return "";
}