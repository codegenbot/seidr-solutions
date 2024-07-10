#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_level;
    for (char c : paren_string) {
        if (c == '(') {
            nesting_level.push(1);
        } else if (c == ')') {
            result.push_back(nesting_level.top());
            nesting_level.pop();
        }
    }
    return result;
}