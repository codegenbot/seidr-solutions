#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> words = {};
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        string word = "";
        while (i < s.length() && s[i] != ' ') {
            word += s[i];
            i++;
        }
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "e"}));
    return 0;
}