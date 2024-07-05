#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int current_depth = 0, max_depth = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) max_depth = current_depth;
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            current_depth = 0;
            max_depth = 0;
        }
    }
    depths.push_back(max_depth); // for the last group
    return depths;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), vector<int>{4}));
    assert(issame(parse_nested_parens("(()) (())"), vector<int>{2, 2}));
    assert(issame(parse_nested_parens("((())) () ((()))"), vector<int>{3, 1, 3}));
    cout << "All tests passed." << endl;
    return 0;
}