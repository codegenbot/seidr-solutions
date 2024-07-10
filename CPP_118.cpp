#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c);
}

string get_closest_vowel(string word) {
    string result;
    for (int i = word.length() - 1; i > 0; i--) {
        if (!isVowel(word[i])) {
            continue;
        }
        int left = i - 1;
        while (left >= 0 && !isConsonant(word[left])) {
            left--;
        }
        if (left < 0) {
            return "";
        }
        result = word.substr(left + 1, i - left - 1);
        break;
    }
    return result;
}