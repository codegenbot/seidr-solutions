#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    size_t pos = 0, found;
    
    for (int i = 0; i < n; i++) {
        found = s.find(" ", pos);
        if (found == string::npos) {
            words.clear();
            break;
        }
        pos = found + 1;
    }
    
    if (found != string::npos) {
        while ((found = s.find(" ", pos)) != string::npos) {
            words.push_back(s.substr(pos, found - pos));
            pos = found + 1;
        }
        words.push_back(s.substr(pos));
    }
    
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}