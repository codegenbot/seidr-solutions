#include <stack>
#include <string>

string match_parens(vector<string> lst) {
    string str = lst[0] + lst[1];
    stack<char> parentheses;

    for (char c : str) {
        if (c == '(') {
            parentheses.push(c);
        } else {
            if (parentheses.empty()) {
                return "No";
            }
            parentheses.pop();
        }
    }

    return parentheses.empty() ? "Yes" : "No";
}