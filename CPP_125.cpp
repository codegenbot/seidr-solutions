#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> split_words(const string& input) {
    vector<string> words;
    stringstream ss(input);
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}