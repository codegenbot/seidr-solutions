#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<string> select_words(string s, int n) {
    stringstream ss(s);
    string word;
    vector<pair<string, int>> word_lengths; // Pair of word and its length

    while (ss >> word) {
        word_lengths.emplace_back(word, word.length());
    }

    sort(word_lengths.begin(), word_lengths.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    });

    vector<string> result(n);

    for (int i = 0; i < n && i < word_lengths.size(); ++i) {
        result[i] = word_lengths[i].first;
    }

    return result;
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);

    assert(result == vector<string>{"Welcome", "contest"});

    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}