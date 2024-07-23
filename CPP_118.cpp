#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) {
            ++left;
        } else if (left > 0 && isvowel(word[right-1])) {
            return std::string(1, tolower(word[right]));
        }
    }
    return "";
}