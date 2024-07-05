#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

// Function to parse nested parentheses.
vector<int> parse_nested_parens(const string& paren_string) {
    vector<int> result;
    int max_depth = 0, current_depth = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        } else if (c == ')') {
            current_depth--;
        }
    }
    result.push_back(max_depth); // record max depth
    return result;
}

// Function to compare two vectors
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    cout << "All tests passed!" << endl;
    return 0;
}