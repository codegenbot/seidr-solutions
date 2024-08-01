#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return to_string(word[i]);
    }
    return "";
}

bool isvowel(char c) {
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}