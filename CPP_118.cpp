#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(toupper(word[i]))) return to_string(word[std::find_if(word.begin() + i + 1, word.end(), isvowel)-word.begin() - 1]);
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}