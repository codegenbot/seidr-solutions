#include <iostream>
#include <vector>
#include <string>
#include <cassert>

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}