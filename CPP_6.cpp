#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
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
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    result.push_back(max_depth); // for the last group
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    assert(issame(parse_nested_parens("(()) ()"), {2, 1}));
    assert(issame(parse_nested_parens("() ((()))"), {1, 3}));
    assert(issame(parse_nested_parens("() (()) (())"), {1, 2, 2}));
    return 0;
}