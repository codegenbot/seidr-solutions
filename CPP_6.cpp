#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int max_depth = 0, current_depth = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) max_depth = current_depth;
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    depths.push_back(max_depth); // For the last group
    return depths;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((()))) "), {3}));
    assert(issame(parse_nested_parens("(()) (())"), {2, 2}));
    assert(issame(parse_nested_parens("()() ((())) ()"), {1, 3, 1}));
    return 0;
}