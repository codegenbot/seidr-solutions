#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int n = word.size();
    string result;
    for (int i = 2; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        if (word[i] == 'Y' || word[i] == 'y') continue;
        if (isvowel(word[i])) {
            if (result.empty()) result = tolower(word[i]);
            else if (abs((int)(word[i] - 'a') - abs((int)(result[0] - 'a'))) > 1) return "";
            break;
        }
    }
    return result;
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}