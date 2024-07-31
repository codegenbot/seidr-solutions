#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> parse_nested_parens(const string &paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = max(max_nesting, 1);
        } else if (c == ')') {
            int level = nesting_levels.top();
            nesting_levels.pop();
            while (level > 0) {
                result.push_back(level);
                level--;
            }
        }
    }

    return result;
}

int main() {
    assert(parse_nested_parens("(()(())((()))") == vector<int>({4}));
    return 0;
}