# include <iostream>
# include <vector>
# include <cassert>
# include <sstream>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    stringstream ss(s);
    while (ss >> word) {
        words.push_back(word);
        if (words.size() == n) {
            break;
        }
    }
    return words;
}