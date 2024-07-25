#include <string>
#include <stack>
#include <vector>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_level;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_level.push(1);
            max_nesting = max(max_nesting, 1);
        } else if (c == ')') {
            nesting_level.pop();
            result.push_back(max_nesting);
            max_nesting = nesting_level.empty() ? 0 : nesting_level.top();
        }
    }

    return result;
}