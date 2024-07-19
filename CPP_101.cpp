#include <vector>

bool issame(vector<string> a, vector<string> b);

vector<string> words_string(string s){
    vector<string> words;
    string word;
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b){
    // Implementation of issame function goes here
}