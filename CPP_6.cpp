#include <vector>
#include <stack>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> levels;
    int maxLevel = 0;

    for (char c : paren_string) {
        if (c == '(') {
            levels.push(++maxLevel);
        } else {
            levels.pop();
        }
    }

    while (!levels.empty()) {
        result.push_back(levels.top());
        levels.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}