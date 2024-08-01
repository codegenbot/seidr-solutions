#include <string>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1])) continue;
        if (islower(word[i]) || isupper(word[i])) {
            for (int j = i - 1; ; --j) {
                if (!isalpha(word[j])) break;
                if (ispunct(word[j]) || isdigit(word[j])) break;
                if (word[j] == 'Y' && j > 0 && isupper(word[j-1])) break;
                if (islower(word[j]) || isupper(word[j])) {
                    return tolower((char)word[i]);
                }
            }
        }
    }
    return "";
}