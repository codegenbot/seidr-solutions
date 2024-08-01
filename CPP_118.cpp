#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return word.substr(i + 1).rfind(isvowel, 0, word.size() - i - 1) == string::npos ? "" : std::to_string(word.find_first_of("AEIOU", i + 1));
    }
    return "";
}

bool isvowel(char c) {
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}