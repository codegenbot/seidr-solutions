#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(const vector<string>& words, const string& substring) {
    vector<string> filtered_words;
    
    for(const string& word : words) {
        if(word.find(substring) != string::npos) {
            filtered_words.push_back(word);
        }
    }
    
    return filtered_words;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    return 0;
}