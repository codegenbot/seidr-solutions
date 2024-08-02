#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting;
    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            nesting.push(i);
        } else if (paren_string[i] == ')') {
            int start = nesting.top();
            nesting.pop();
            result.push_back(i - start);
        }
    }
    return result;
}

int main() {
    string paren_string = "(()()) ((())) () ((())()())";
    vector<int> result = parse_nested_parens(paren_string);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}