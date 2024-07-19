#include <iostream>
#include <vector>
#include <cassert>
#include <sstream>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    stringstream ss(s);
    for (int i = 0; i < n && ss >> word; ++i) {
        words.push_back(word);
    }
    return words;
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);

    assert(issame(result, {"world", "contest"}));

    for (const string &word : result) {
        cout << word << endl;
    }

    return 0;
}