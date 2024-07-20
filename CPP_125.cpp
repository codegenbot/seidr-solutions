#include <iostream>
#include <vector>
#include <cassert>
#include <string>
#include <sstream>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size();
}

vector<string> split_words(const string& txt) {
    vector<string> words;
    istringstream iss(txt);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(split_words(""), {""}));
    return 0;
}