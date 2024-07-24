#include <string>
#include <cctype>

string get_closest_vowel(string word) {
    int n = word.length();
    string closestVowel = "";
    
    for (int i = 0; i < n; i++) {
        if (isVowel(word[i])) {
            closestVowel = tolower(word[i]) + "";
            break;
        }
    }
    
    if (closestVowel == "") {
        return "NO VOWELS";
    } else {
        return closestVowel;
    }
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}