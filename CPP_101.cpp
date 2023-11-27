#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> words_string(string s);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> words_string(string s) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

int main() {
    vector<string> result = words_string("ahmed     , gamal");
    assert(issame(result, {"ahmed", "gamal"}));
    return 0;
}