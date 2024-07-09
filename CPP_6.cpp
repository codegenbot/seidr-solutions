#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_nested_parens(string paren_string);

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
}