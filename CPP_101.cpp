#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        stringstream ws(word);
        while (getline(ws, word, ',')) {
            if (!word.empty()) {
                result.push_back(word);
            }
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(words_string("ahmed, gamal"), {"ahmed", "gamal"}));
    assert(issame(words_string("ahmed     ,     gamal"), {"ahmed", "gamal"}));
    cout << "All tests passed!" << endl;
    return 0;
}