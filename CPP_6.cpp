#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            result.push_back(depth);
        } else if (c == ')') {
            result.push_back(depth);
            depth--;
        }
    }
    return result;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}