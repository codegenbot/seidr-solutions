#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int n = word.length();
    string result;
    
    // Check from right to left for a vowel between two consonants.
    for (int i = n - 1; i > 0; --i) {
        if (!isvowel(word[i])) {
            while (i > 0 && !isconsonant(word[i]))
                --i;
            if (i < n - 1 && isvowel(word[i + 1]))
                return string(1, word[i + 1]);
        }
    }
    
    // If no vowel between two consonants found, return an empty string.
    return result;
}

bool isconsonant(char c) {
    c = tolower(c);
    return (c >= 'b' && c <= 'z') && (!isvowel(c));
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}