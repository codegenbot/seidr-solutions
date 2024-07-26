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

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}