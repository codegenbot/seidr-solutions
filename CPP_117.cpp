#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    vector<string> result;
    if (n > 0 && n < words.size()) {
        for (int i = n - 1; i <= n + 1 && i < words.size(); ++i) {
            result.push_back(words[i]);
        }
    }

    return result;
}