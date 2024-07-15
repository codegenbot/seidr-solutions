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