#include <iostream>
#include <vector>
#include <cassert>
#include <sstream>
#include <string>

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    stringstream ss(s);
    while (ss >> word && words.size() < n) {
        words.push_back(word);
    }
    return words;
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);

    assert(result == vector<string>{"world", "contest"});

    for (const string &word : result) {
        cout << word << endl;
    }

    return 0;
}