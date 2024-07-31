#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <sstream>

using namespace std;

vector<string> select_words(const string& s, int n) {
    vector<string> words;
    istringstream iss(s);
    string word;

    while (iss >> word) {
        if (word.size() > n) {
            words.push_back(word);
        }
    }
    return words;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    string s;
    int n;
    cin >> s >> n;

    vector<string> words = select_words(s, n);

    assert(issame(select_words("a b c d e f", 1), vector<string>{"b", "c", "d", "f"}));
    assert(issame(words, select_words(s, n)));

    return 0;
}