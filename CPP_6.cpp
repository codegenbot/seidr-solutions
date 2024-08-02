#include <vector>

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> parse_nested_parens(string paren_string);

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            depths.push_back(depth);
        } else if (c == ')') {
            depth--;
        }
    }
    int max_depth = 0;
    for (int d : depths) {
        max_depth = max(max_depth, d);
    }
    return depths;
}

int main() {
    return 0;
}