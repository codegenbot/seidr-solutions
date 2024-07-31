#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return equal(a.begin(), a.end(), b.begin());
}

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

int main() {
    vector<string> expected = {"Hello", "World"};
    assert(issame(split_words(""), {}));
    assert(issame(split_words("Hello World"), expected));
    
    return 0;
}