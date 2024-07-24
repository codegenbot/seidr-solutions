#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}

string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i > 0 && !isVowel(word[i]); i--) {
        if (isConsonant(word[i-1]) && isVowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }
    return "";
}