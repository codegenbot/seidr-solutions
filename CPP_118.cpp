#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    std::string closest_vowel;

    for (int i = 0; i < n; ++i) {
        char c = tolower(word[i]);

        if (isalpha(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            closest_vowel = word.substr(i);
            break;
        }
    }

    return closest_vowel;
}