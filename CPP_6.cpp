#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(string paren_string) {
    vector<int> levels;
    int max_level = 0;
    int current_level = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
            max_level = max(max_level, current_level);
        } else if (c == ')') {
            current_level--;
        } else if (c == ' ') {
            levels.push_back(max_level);
            max_level = 0;
            current_level = 0;
        }
    }
    levels.push_back(max_level);
    return levels;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
}