#include <string>
#include <cctype>

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return word.substr(i + 1).rfind(isvowel) == string::npos ? "" : to_string(word[substr(i + 1, rfind(isvowel)).front()]);
    }
    return "";
}

bool isvowel(char c) {
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}