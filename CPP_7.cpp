#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> filter_by_substring(vector<string> words, string sub) {
    vector<string> result;
    for (const auto &word : words) {
        if (word.find(sub) != string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}