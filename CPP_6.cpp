```cpp
#include <stack>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(const string &paren_string) {
    vector<int> result;
    stack<std::size_t> nesting_levels;
    std::size_t max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = max(max_nesting, 1);
        } else if (c == ')') {
            nesting_levels.pop();
            max_nesting = max(max_nesting, nesting_levels.size());
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((()))"), vector<int>({4})));
    return 0;
}