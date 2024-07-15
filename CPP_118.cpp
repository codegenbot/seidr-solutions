#include <string>
#include <algorithm>

std::string get_closest_vowel(const std::string& word) {
    for (int i = word.length() - 2; i > 0; --i) {
        if (isalpha(word[i]) && 
            strchr("aeiouAEIOU", word[i]) &&
            !strchr("aeiouAEIOU", word[i - 1]) &&
            !strchr("aeiouAEIOU", word[i + 1])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}