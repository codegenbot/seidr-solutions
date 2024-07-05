#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>
#include <string>

using namespace std;

vector<string> words_string(const string& s) {
    vector<string> result;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        stringstream ss_word(word);
        string subword;
        while (getline(ss_word, subword, ',')) {
            if (!subword.empty()) {
                result.push_back(subword);
            }
        }
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed, gamal"), {"ahmed", "gamal"}));
    cout << "Test passed!" << endl;
    return 0;
}