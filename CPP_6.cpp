#include <stack>
#include <vector>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = max(max_nesting, 1);
        } else if (c == ')') {
            result.push_back(max_nesting);
            nesting_levels.pop();
            max_nesting = nesting_levels.empty() ? 0 : nesting_levels.top();
        }
    }

    return result;
}