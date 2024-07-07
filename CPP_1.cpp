#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stack<string> parentheses;
    string currentParenthesis = "";

    for (char c : paren_string) {
        if (c == '(') {
            currentParenthesis += "(";
            parentheses.push(currentParenthesis);
        } else if (c == ')') {
            currentParenthesis += ")";
            if (!parentheses.empty()) {
                parentheses.pop();
                while (!parentheses.empty()) {
                    currentParenthesis = parentheses.top() + currentParenthesis;
                    parentheses.pop();
                }
                result.push_back(currentParenthesis);
                currentParenthesis = "";
            }
        } else {
            currentParenthesis += c;
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