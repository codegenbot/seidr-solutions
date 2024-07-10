#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int right = word.size() - 1;
    while (right >= 0 && !isVowel(word[right])) {
        right--;
    }
    if (right < 0) return "";
    
    int left = right - 1;
    while (left >= 0 && !isConsonant(word[left])) {
        left--;
    }
    if (left < 0) return "";
    
    for (; left <= right; left++) {
        if (isVowel(word[left])) {
            return word.substr(left, 1);
        }
    }
    
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}