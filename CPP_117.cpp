#include<bits/stdc++.h>
using namespace std;

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c != ' ') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                consonant_count++;
            }
            word += c;
        } else {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        }
    }

    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}

assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));