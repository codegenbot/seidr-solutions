#include <vector>
#include <cassert>

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

vector<int> parse_nested_parens(string paren_string);

int main() {
    assert(issame(parse_nested_parens("( ( ) ) ( )"), {2, 2, 1}));
    assert(issame(parse_nested_parens("( ( ) ( ( ) ) )"), {2, 2, 3}));
    assert(issame(parse_nested_parens("( ) ( ( ) )"), {1, 2, 2}));
    
    return 0;
}