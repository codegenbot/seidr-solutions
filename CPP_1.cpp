#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stack<string> parentheses;
    string currentParentheses = "";

    for (char c : paren_string) {
        if (c == '(') {
            currentParentheses += c;
            parentheses.push(currentParentheses);
            currentParentheses = "";
        } else if (c == ')') {
            currentParentheses += c;
            parentheses.push(currentParentheses);
            currentParentheses = "";
        } else {
            currentParentheses += c;
        }

        if (!parentheses.empty()) {
            string top = parentheses.top();
            int diff = top.length() - currentParentheses.length();
            while (diff > 0) {
                currentParentheses += ')';
                diff--;
            }
        }
    }

    while (!parentheses.empty()) {
        result.push_back(parentheses.top());
        parentheses.pop();
    }

    return result;
}

int main() {
    vector<string> res = separate_paren_groups("( ) (( )) (( )( ))");
    for (const auto& s : res) {
        cout << s << endl;
    }
    return 0;
}