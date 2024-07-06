#include <stack>

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(nesting_levels.size() + 1);
        } else if (c == ')') {
            max_nesting = max(max_nesting, nesting_levels.top());
            nesting_levels.pop();
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(max_nesting);
        max_nesting = nesting_levels.top();
        nesting_levels.pop();
    }

    return result;
}