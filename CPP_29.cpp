#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> words, string prefix) {
    vector<string> result;
    for (const auto &word : words) {
        if (word.substr(0, prefix.size()) == prefix) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    assert(is_same(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}