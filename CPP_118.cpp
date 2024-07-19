#include <string>

string get_closest_vowel(const string& word) {
    for (int i = word.size() - 2; i > 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            return string(1, word[i]);
        }
        if (isalpha(word[i]) && !isalpha(word[i + 1]) && !isalpha(word[i - 1])) {
            return "";
        }
    }
    return "";
}