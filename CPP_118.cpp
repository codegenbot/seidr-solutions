#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int left = 0;
    for (int i = 0; i < word.size(); i++) {
        if (!isvowel(word[i])) {
            left = i + 1;
        } else if (i > left) {
            return string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}