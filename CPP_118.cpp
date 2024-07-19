#include <string>
#include <cctype>

string get_closest_vowel(string word) {
    int i = word.size() - 1;
    while (i > 0 && !isVowel(word[i])) {
        i--;
    }
    if (i == 0 || !isVowel(word[i]))
        return "";
    for (int j = i - 1; j >= 0 && !isVowel(word[j]); j--) {
        if (isConsonant(word[j]))
            continue;
        return word.substr(j, 1);
    }
    return "";
}

bool isVowel(char c) {
    c = std::tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = std::tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}