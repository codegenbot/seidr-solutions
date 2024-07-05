#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        stringstream ss_word(word);
        string subword;
        while (getline(ss_word, subword, ',')) {
            if (!subword.empty())
                result.push_back(subword);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    cout << "Test passed!" << endl;
    return 0;
}