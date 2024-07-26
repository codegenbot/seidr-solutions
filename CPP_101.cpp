#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <sstream>

using namespace std;

vector<string> words_string(const string& input) {
    istringstream iss(input);
    vector<string> tokens;
    string word;
    while (iss >> word) {
        tokens.push_back(word);
    }
    return tokens;
}

void main() {
    assert(words_string("ahmed     , gamal") == vector<string>{"ahmed", "gamal"});
}