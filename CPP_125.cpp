#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";
    
    for (char c : txt) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    
    return 0;
}