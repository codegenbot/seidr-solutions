#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> words;
    stringstream ss(txt);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    vector<string> split_result = split_words("");
    assert(split_result.size() == 0);
    
    return 0;
}