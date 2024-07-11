#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
        } else {
            int level = nesting_levels.top();
            nesting_levels.pop();
            if (!nesting_levels.empty()) {
                result.push_back(level);
            }
        }
    }
    return result;
}