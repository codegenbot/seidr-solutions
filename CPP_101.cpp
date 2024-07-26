#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <sstream>

using namespace std;

namespace contest {
    bool issame(vector<string> a, vector<string> b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }
}

vector<string> words_string(const string &str) {
    vector<string> words;
    string word;
    istringstream iss(str);
    
    while (iss >> word) {
        words.push_back(word);
    }
    
    return words;
}