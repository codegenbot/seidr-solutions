#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> words, string substring) {
    vector<string> filtered_words;
    for (const auto& word : words) {
        if (word.find(substring) != string::npos) {
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}