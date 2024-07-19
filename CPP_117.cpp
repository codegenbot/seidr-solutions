#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<string> select_words(string s, int n);

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}