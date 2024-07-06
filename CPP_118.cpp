#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = -1;
    for (int i = 0; i < word.length(); i++) {
        if ("aeiouAEIOU"[0] == tolower(word[i])) {
            if (left != -1)
                return word.substr(min(left, i), i - left + 1);
            left = i;
        }
    }
    return word.substr(0, left + 1);
}

int min(int a, int b) {
    return a < b ? a : b;
}