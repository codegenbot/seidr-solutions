#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; i--) {
        if (!isVowel(word[i])) {
            left = i + 1;
            break;
        }
    }

    int right = 0;
    for (int i = 0; i < word.size(); i++) {
        if (!isVowel(word[i])) {
            right = i;
            break;
        }
    }

    for (int i = left; i <= right; i++) {
        if (isVowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }

    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}