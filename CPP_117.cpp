#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    stringstream ss(s);
    while (ss >> word) {
        words.push_back(word);
    }
    vector<string> result;
    for (int i = n; i < words.size(); i++) {
        result.push_back(words[i]);
    }
    return result;
}

int main() {
    bool result = select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "e", "f"};
    assert(result);
    return result ? 0 : 1;
}