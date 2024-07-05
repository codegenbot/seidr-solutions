#include <vector>
#include <string>
#include <iostream>
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
            result.push_back(max_depth);
            current_depth = 0;
            max_depth = 0;
        }
    }
    result.push_back(max_depth); // For the last group
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(() (()) ((())))"), {2, 2, 3}));
    cout << "All tests passed!" << endl;
    return 0;
}