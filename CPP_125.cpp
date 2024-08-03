#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    stringstream ss(txt);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(split_words(""), { "0" }));
    return 0;
}