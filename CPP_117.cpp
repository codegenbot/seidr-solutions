#include <iostream>
#include <vector>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> select_words(string str, int index) {
    vector<string> words;
    stringstream ss(str);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    vector<string> result;
    for (int i = index; i < words.size(); ++i) {
        result.push_back(words[i]);
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) { 
    return a == b; 
}

int main() {
    assert (issame(select_words("a b c d e f", 1) , {"b", "c", "d", "e", "f"}));
    return 0;
}