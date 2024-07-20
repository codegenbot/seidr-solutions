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

assert(select_words("a b c d e f", 4) == vector<string>{"a", "b", "c", "d"});
assert(select_words("a b c d e f", 1) == vector<string>{"a"});