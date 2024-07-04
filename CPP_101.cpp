#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> words_string(string s) {
    vector<string> result;
    string word;
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
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
    string input;
    getline(cin, input);
    vector<string> result = words_string(input);
    for (const string& word : result) {
        cout << word << endl;
    }
    return 0;
}