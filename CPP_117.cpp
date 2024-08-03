#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    for (int i = 0, cnt = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            if (cnt >= n) words.push_back(word);
            word = "";
            cnt++;
        } else {
            word += s[i];
        }
    }
    if (cnt >= n) words.push_back(word);
    return words;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "e", "f"}));
}