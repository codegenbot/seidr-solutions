#include <iostream>
#include <vector>
#include <cassert>
#include <string>
#include <sstream>

using namespace std;

vector<string> split_words(const string& txt) {
    vector<string> words;
    istringstream iss(txt);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(split_words("") == vector<string>{""});
    return 0;
}