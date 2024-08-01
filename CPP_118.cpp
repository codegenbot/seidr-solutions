#include <cctype>
#include <string>

std::string get_closest_vowel(std::string);

std::string get_closest_vowel(string word) {
    int n = word.length();
    string closestVowel = "";
    for (int i = n - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            for (int j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j]) && !isconsonant(word, j)) break;
                else if (!isvowel(word[j]) && isconsonant(word, j)) continue;
                else {
                    closestVowel = (char)(word[i]);
                    return closestVowel;
                }
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(string word, int i) {
    char c = tolower(word[i]);
    if (c >= 'b' && c <= 'z') return true;
    else if (c >= 'a' && c <= 'z') return false;
    else return true;
}