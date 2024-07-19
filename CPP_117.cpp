#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    istringstream iss(s);
    while (iss >> word) {
        if (--n > 0) {
            words.push_back(word);
        }
    }
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main_task() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}