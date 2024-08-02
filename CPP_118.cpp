#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for (int right = word.length() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) {
            ++left;
        } else if (left > 0) {
            return std::string(1, word[right]);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = std::tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}