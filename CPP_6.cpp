#include <stack>

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int current_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
            nesting_levels.push(current_level);
        } else if (c == ')') {
            nesting_levels.pop();
            current_level--;
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}