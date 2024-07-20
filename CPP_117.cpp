#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (word.length() > n) {
                bool has_n_consonants = false;
                for (char c : word) {
                    if (!isalpha(c) || isvowel(c)) continue;
                    has_n_consonants = true;
                    break;
                }
                if (has_n_consonants)
                    result.push_back(word);
            }
            word = "";
        } else {
            word += tolower(s[i]);
        }
    }
    // Check the last word
    if (word.length() > n) {
        bool has_n_consonants = false;
        for (char c : word) {
            if (!isalpha(c) || isvowel(c)) continue;
            has_n_consonants = true;
            break;
        }
        if (has_n_consonants)
            result.push_back(word);
    }
    return result;
}