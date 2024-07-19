#include <stack>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_level = max(max_level, 1);
        } else if (c == ')') {
            nesting_levels.pop();
            result.push_back(max_level);
            max_level = nesting_levels.empty() ? 0 : max_level - 1;
        }
    }

    return result;
}