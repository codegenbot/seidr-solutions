#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    string word;
    for (char c : txt) {
        if (c == ' ') {
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

bool issame(const vector<string>& a, const vector<string>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

int contest_solution(){
    assert(issame(split_words(""), {}));
    assert(issame(split_words("Hello World"), {"Hello", "World"}));
    
    return 0;
}