```cpp
#include <vector>
#include <stack>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
        } else if (c == ')') {
            int level = nesting_levels.top();
            nesting_levels.pop();
            result.push_back(level);
        }
    }
    return result;
}

int main() {
    assert(parse_nested_parens("(()(())((()))") == vector<int>({4}));
    return 0;
}