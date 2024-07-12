#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> parseNestedParens(string paren_string) {
    vector<int> result;
    int max_depth = 0;
    int depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            max_depth = max(max_depth, depth);
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