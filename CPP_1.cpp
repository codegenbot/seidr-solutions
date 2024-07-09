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
            currentParentheses += "(";
            parentheses.push(currentParentheses);
            currentParentheses = "";
        } else if (c == ')') {
            currentParentheses += ")";
            if (!parentheses.empty()) {
                parentheses.push(currentParentheses);
                currentParentheses = "";
            }
        } else {
            currentParentheses += c;
        }

        if (c == ')' && !parentheses.empty()) {
            string temp = parentheses.top();
            parentheses.pop();
            while (!temp.empty() && temp.back() != '(') {
                temp.pop_back();
            }
            if (!temp.empty()) {
                result.push_back(temp);
            }
        }
    }

    return result;
}

int main() {
    string input = "( ) (( )) (( )( ))";
    vector<string> output = separate_paren_groups(input);

    for (string s : output) {
        cout << s << endl;
    }

    return 0;
}