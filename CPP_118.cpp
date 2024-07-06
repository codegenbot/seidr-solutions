#include <algorithm>
#include <string>
using namespace std;

bool isconsonant(string word, int i) {
    char c = tolower(word[i]);
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            for (int j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j]) && !isconsonant(word, j)) break;
                else if (!isvowel(word[j]) && isconsonant(word, j)) continue;
                else return string(1, word[i]);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}