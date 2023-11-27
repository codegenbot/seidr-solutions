#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> words_string(const string& s);

bool issame(const vector<string>& a, const initializer_list<string>& b);

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    // Add more test cases if needed
    return 0;
}

vector<string> words_string(const string& s) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (word != "") {
                words.push_back(word);
                word = "";
            }
        }
        else {
            word += s[i];
        }
    }
    if (word != "") {
        words.push_back(word);
    }
    return words;
}

bool issame(const vector<string>& a, const initializer_list<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    auto it1 = a.begin();
    auto it2 = b.begin();
    for (; it1 != a.end(); ++it1, ++it2) {
        if (*it1 != *it2) {
            return false;
        }
    }
    return true;
}