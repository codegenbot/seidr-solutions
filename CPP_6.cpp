#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int max_depth = 0, current_depth = 0;
    for (char ch : paren_string) {
        if (ch == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        } else if (ch == ')') {
            current_depth--;
        } else if (ch == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    result.push_back(max_depth); // For the last group
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    assert(issame(parse_nested_parens("() ((()()))"), {1, 3}));
    assert(issame(parse_nested_parens("((( ))) (() (()) )"), {3, 1, 2}));
    cout << "All tests passed!" << endl;
    return 0;
}