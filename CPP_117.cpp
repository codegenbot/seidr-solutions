#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e') + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o') + count(word.begin(), word.end(), 'u') == word.size()) {
                int consonants = 0;
                for (char ch : word) {
                    if (!isvowel(ch)) {
                        consonants++;
                    }
                }
                if (consonants == n) {
                    result.push_back(word);
                }
            }
            word = "";
        } else {
            word += c;
        }
    }
    return result;
}

bool isvowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}