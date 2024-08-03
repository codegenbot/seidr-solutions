#include <iostream>
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
            currentParentheses += c;
            parenthesesStack.push(currentParentheses);
            currentParentheses = "";
        } else if (c == ')') {
            currentParentheses += c;
            stack<string> tempStack(parenthesesStack);
            while (!tempStack.empty()) {
                tempStack.pop();
            }
            result.push_back(currentParentheses);
            currentParentheses = "";
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