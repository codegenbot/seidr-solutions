#include <string>
#include <algorithm>

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) {
            break;
        }
        left = i;
    }

    for (int i = left; i >= 0; --i) {
        if (isvowel(word[i])) {
            return word.substr(i, 1);
        }
    }

    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}