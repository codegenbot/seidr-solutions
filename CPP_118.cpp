#include <string>
#include <algorithm>

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) {
            left = right + 1;
            break;
        }
    }
    for (int i = left; i < word.size(); ++i) {
        if (find(vowels.begin(), vowels.end(), tolower(word[i])) != vowels.end()) {
            return string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) {
    string vowels = "aeiouAEIOU";
    return find(vowels.begin(), vowels.end(), tolower(c)) != vowels.end();
}