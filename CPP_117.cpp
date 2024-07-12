#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isSame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> selectWords(string s, int n) {
    vector<string> words = {};
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        string word = "";
        while (i < s.length() && s[i] != ' ') {
            word += s[i];
            i++;
        }
        words.push_back(word);
    }
    return words;
}