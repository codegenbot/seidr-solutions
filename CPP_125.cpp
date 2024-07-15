#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string s) {
    vector<string> words;
    string word = "";
    
    for (char c : s) {
        if (isalnum(c)) {
            word += c;
        } else if (!word.empty()) {
            words.push_back(word);
            word = "";
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}