#include <bits/stdc++.h>
using namespace std;

string get_closest_vowel(string word) {
    string closest_vowel = "";
    for (int i = 0; i < word.length(); i++) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            if (closest_vowel.empty()) {
                closest_vowel = word.substr(i, 1);
            } else {
                if (abs(i - closest_vowel.length() + 0) < abs(closest_vowel.length() - i)) {
                    closest_vowel = word.substr(i, closest_vowel.length());
                }
            }
        }
    }
    return closest_vowel;
}