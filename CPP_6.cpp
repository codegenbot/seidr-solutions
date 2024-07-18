#include <vector>
#include <cassert>

vector<int> parse_nested_parens(string paren_string);

bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int max_depth = 0;
    int depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            if (depth > max_depth) {
                max_depth = depth;
            }
        } else if (c == ')') {
            depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }

    result.push_back(max_depth);

    return result;
}