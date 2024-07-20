#include <iostream>
#include <vector>
#include <cassert> // Include cassert for assert function

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
    assert(select_words("a b c d e f", 4) == vector<string>{"a", "b", "c", "d"}); // Add c before assert 
    assert(select_words("a b c d e f", 1) == vector<string>{"a"});
    return 0;
}