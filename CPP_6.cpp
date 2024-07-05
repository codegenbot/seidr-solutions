#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int current_depth = 0, max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) max_depth = current_depth;
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            if (max_depth > 0 || current_depth > 0) {
                result.push_back(max_depth);
                current_depth = 0;
                max_depth = 0;
            }
        }
    }
    if (max_depth > 0 || current_depth > 0) {
        result.push_back(max_depth); // For the last group
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    assert(issame(parse_nested_parens("() () ((()))"), {1, 1, 3}));
    assert(issame(parse_nested_parens(""), {0}));
    assert(issame(parse_nested_parens("((())()(())) () (()())"), {3, 1, 2}));
    cout << "All test cases passed!\n";
    return 0;
}