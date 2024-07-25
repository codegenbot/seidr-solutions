#include <stack>
#include <vector>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> levels;
    int maxLevel = 0;

    for (char c : paren_string) {
        if (c == '(') {
            levels.push(1);
            maxLevel = max(maxLevel, 1);
        } else if (c == ')') {
            levels.pop();
            result.push_back(maxLevel);
            maxLevel--;
        }
    }

    return result;
}