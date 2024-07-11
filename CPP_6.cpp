#include <stack>

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int current_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(++current_level);
        } else if (c == ')') {
            result.push_back(current_level);
            nesting_levels.pop();
            --current_level;
        }
    }

    return result;
}