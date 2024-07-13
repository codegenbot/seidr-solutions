#include <algorithm>
#include <cctype>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) continue;
        if (ispunct(i == 0 || !isalpha(word[i - 1]))) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return string(1, word[i]);
        }
    }
    return "";
}