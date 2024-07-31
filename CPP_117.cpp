#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    istringstream iss(s);
    vector<string> words;
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    if (n > words.size()) {
        return {};
    } else {
        return vector<string>(words.begin() + n, words.end());
    }
}

int main() {
    string input_string;
    int n;
    getline(cin, input_string);
    cin >> n;
    
    vector<string> selected_words = select_words(input_string, n);

    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "e", "f"}));
    
    return 0;
}