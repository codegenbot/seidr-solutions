#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; i--) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u') {
            for (int j = i - 1; j >= 0; j--) {
                if (!isVowel(word[j])) {
                    return word.substr(j + 1, i - j);
                }
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        default:
            return false;
    }
}