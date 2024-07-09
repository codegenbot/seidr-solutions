#include <stack>
#include <vector>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<char> parentheses;
    int maxDepth = 0, currentDepth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            parentheses.push(c);
            currentDepth++;
            if (currentDepth > maxDepth)
                maxDepth = currentDepth;
        } else if (c == ')') {
            parentheses.pop();
            currentDepth--;
        }
    }

    result.push_back(maxDepth);

    return result;
}