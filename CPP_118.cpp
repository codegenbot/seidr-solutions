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
        if (isvowel(word[i])) {
            return string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) {
    std::string vowels = "aeiouAEIOU";
    return std::find(vowels.begin(), vowels.end(), c) != vowels.end();
}