#include <string>
#include <cctype>

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(toupper(word[i]))) return isvowel(word.substr(i + 1)) == string::npos ? "" : to_string(word[0]);
    }
    return "";
}

bool isvowel(char c) {
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}