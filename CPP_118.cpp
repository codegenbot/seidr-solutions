#include <string>

string get_closest_vowel(string word);

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string get_closest_vowel(string word){
    int n = word.length();
    for (int i = n - 3; i > 0; i--) {
        if (isVowel(word[i])) {
            return string(1, word[i]);
        }
    }
    return "";
}