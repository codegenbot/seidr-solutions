#include <vector>
#include <stack>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stack<string> parenthesesStack;
    string currentParentheses = "";

    for (char c : paren_string) {
        if (c == '(') {
            currentParentheses += "(";
            parenthesesStack.push(currentParentheses);
            currentParentheses = "";
        } else if (c == ')') {
            currentParentheses += ")";
            if (!parenthesesStack.empty()) {
                parenthesesStack.top() += currentParentheses;
                currentParentheses = parenthesesStack.top();
                parenthesesStack.pop();
            }
        } else {
            currentParentheses += c;
        }

        if (parenthesesStack.empty()) {
            result.push_back(currentParentheses);
            currentParentheses = "";
        }
    }

    return result;
}