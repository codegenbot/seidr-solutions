#include <stack>

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
        } else if (c == ')') {
            int current_level = nesting_levels.top();
            nesting_levels.pop();
            result.push_back(current_level);
        }
    }

    return result;
}