#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> words, string sub) {
    vector<string> result;
    for (string word : words) {
        if (word.find(sub) != string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    
    return 0;
}