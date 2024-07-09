```cpp
#include <vector>

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(parse_nested_parens("(()(())((()))") ,{4}));
    return 0;
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