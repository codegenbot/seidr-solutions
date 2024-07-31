#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    istringstream iss(s);
    vector<string> words;
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    if (n <= words.size()) {
        return vector<string>(words.begin() + n, words.end());
    }
    return {};
}

int main() {
    string input_string;
    int n;
    getline(cin, input_string);
    cin >> n;
    
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "e", "f"}));

    return 0;
}