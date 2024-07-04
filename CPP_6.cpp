#include <vector>
#include <string>
#include <cassert>
#include <iostream>

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
        }
    }
    result.push_back(max_depth);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    cout << "All test cases passed!" << endl;
    return 0;
}