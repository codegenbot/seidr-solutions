#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.length() - 2; i >= 1; --i) {
        if (!isalnum(word[i])) continue;
        if (isvowel(word[i])) return string(1, tolower(word[i]));
        while (i > 0 && !isalnum(word[i-1])) --i;
        for (++i; i < word.length() && !isalnum(word[i]); ++i) {}
        if (!isalnum(word[i-1]) || isvowel(word[i-1])) return string(1, tolower(word[i-1]));
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}