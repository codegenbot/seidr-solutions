#include <iostream>
#include <string>
#include <cctype>

using namespace std;

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return string(1, tolower(word[i]));
        while (!isalpha(word[i-1]) && i > 0) --i;
        if (isvowel(word[i-1])) return string(1, tolower(word[i-1]));
    }
    return "";
}