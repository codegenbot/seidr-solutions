```cpp
#include <vector>
#include <string>

vector<int> parse_nested_parens(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count > 0) {
                count--;
            }
        }
    }
    return {count + 1};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
assert(parse_nested_parens("(()(())((()))") == vector<int>({4}));