#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = 0; i < word.size(); ++i) {
        if (!isalpha(word[i])) continue;
        bool found = false;
        for (int j = i + 1; j < word.size(); ++j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || isupper(word[j]) || islower(word[j]) == 'y') continue;
            if (ispunct(word[i]) || isupper(word[i]) || islower(word[i]) == 'y' || i == 0) continue;
            if (ispunct(word[j]) && j > i + 1) continue;
            if (vowel(word[i]) && vowel(word[j])) {
                found = true;
                break;
            }
        }
        if (found) return word.substr(i, 1);
    }
    return "";
}

bool vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}