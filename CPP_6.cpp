#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0, current_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(++current_level);
            max_nesting = max(max_nesting, current_level);
        } else if (c == ')') {
            nesting_levels.pop();
            if (nesting_levels.empty()) {
                result.push_back(current_level - 1);
                current_level = 0;
            }
        }
    }

    return result;
}