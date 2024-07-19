#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>

using namespace std;

bool are_same(vector<string> a, vector<string> b) {
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