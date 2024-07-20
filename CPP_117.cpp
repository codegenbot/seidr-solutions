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

int main() {
    assert(select_words("a b c d e f", 4)[0] == "a");
    assert(select_words("a b c d e f", 4)[1] == "b");
    assert(select_words("a b c d e f", 4)[2] == "c");
    assert(select_words("a b c d e f", 4)[3] == "d");

    assert(select_words("a b c d e f", 1)[0] == "a");
    
    return 0;
}