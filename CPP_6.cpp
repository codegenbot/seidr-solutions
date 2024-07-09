#include <stack>
#include <vector>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    stack<int> depth;
    vector<int> result;
    int maxDepth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth.push(1);
            maxDepth = max(maxDepth, 1);
        } else if (c == ')') {
            int currentDepth = depth.top();
            depth.pop();
            result.push_back(currentDepth);
            maxDepth = max(maxDepth, currentDepth);
        }
    }

    return result;
}