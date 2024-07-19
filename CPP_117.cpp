#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    istringstream iss(s);
    while (iss >> word) {
        if (n-- > 0) {
            words.push_back(word);
        }
    }
    return words;
}

int main() {
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "e", "f"});
    return 0;
}