#include <string>
#include <cctype>

std::string get_closest_vowel(const std::string& word) {
    int left = 0;
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isvowel(word[i])) {
            left = i + 1;
            break;
        }
    }
    for (int i = left; i < word.length(); ++i) {
        if (isvowel(word[i])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) {
    return std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u';
}