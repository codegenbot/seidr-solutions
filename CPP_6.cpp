#include <stack>

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = max(max_nesting, 1);
        } else {
            if (!nesting_levels.empty()) {
                int current_level = nesting_levels.top();
                nesting_levels.pop();
                if (nesting_levels.empty())
                    result.push_back(current_level);
                else
                    max_nesting = max(max_nesting, current_level + 1);
            }
        }
    }

    return result;
}