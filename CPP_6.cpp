#include <stack>
#include <vector>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(++max_level);
        } else if (c == ')') {
            result.push_back(nesting_levels.top());
            nesting_levels.pop();
        }
    }

    return result;
}