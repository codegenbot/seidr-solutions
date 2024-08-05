#include <vector>
#include <string>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<int> parse_nested_parens(string paren_string){
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
    return depths;
}

assert(issame(parse_nested_parens("(()(())((())))"), {4}));