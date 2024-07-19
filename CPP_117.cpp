#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    s += " "; // add a space at the end to handle the last word
    for (char c : s) {
        if (c == ' ' || c == ',' || c == '.' || c == '!' || c == '?') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.size() > b.size() || (a.size() == b.size() && a < b);
    });
    words.resize(min(n, static_cast<int>(words.size())));
    return words;
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);

    assert(result == vector<string>{"Welcome", "contest"});

    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}