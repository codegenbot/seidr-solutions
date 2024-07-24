#include <stack>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting_level = max(max_nesting_level, 1);
        } else if (c == ')') {
            int current_level = nesting_levels.top();
            nesting_levels.pop();
            max_nesting_level = max(max_nesting_level, current_level);
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}