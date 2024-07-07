#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else if (!word.empty()) {
            bool has_n_consonants = count_if(word.begin(), word.end(),
                [](char ch) { return !isalpha(ch) || isvowel(tolower(ch)); }) == n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    bool has_n_consonants = count_if(word.begin(), word.end(),
        [](char ch) { return !isalpha(ch) || isvowel(tolower(ch)); }) == n;
    if (has_n_consonants) {
        result.push_back(word);
    }
    sort(result.begin(), result.end());
    return result;
}

bool isvowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}