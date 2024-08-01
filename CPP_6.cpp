#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> depth;
    int maxDepth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth.push(1);
            maxDepth = max(maxDepth, 1);
        } else if (c == ')') {
            depth.pop();
            maxDepth = max(maxDepth, depth.size());
        }
    }

    while (!depth.empty()) {
        result.push_back(depth.top());
        depth.pop();
    }

    return result;
}