#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            if (n != 1) {
                n--;
            } else {
                words.push_back(word);
            }
            word = "";
        }
    }
    if (n == 1) words.push_back(word);
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
}