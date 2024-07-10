#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(vector<string> words, string sub) {
    vector<string> result;
    for (const auto &word : words) {
        if (word.find(sub) != string::npos) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == vector<string>{"grunt", "prune"});
    return 0;
}