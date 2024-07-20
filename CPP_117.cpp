#include <iostream>
#include <vector>
#include <cassert>
#include <sstream>

using namespace std;

vector<string> select_words(const string& sentence, int n) {
    vector<string> words;
    istringstream iss(sentence);
    string word;
    while(iss >> word) {
        words.push_back(word);
        if(words.size() == n) break;
    }
    return words;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 4), vector<string>{"a", "b", "c", "d"}));
    return 0;
}