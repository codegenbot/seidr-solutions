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

int main() {
    assert(split_words("").empty());
    assert(split_words("Hello World") == vector<string>{"Hello", "World"});
    
    return 0;
}