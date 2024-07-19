#include <stack>
#include <vector>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = std::max(max_nesting, (int)nesting_levels.size());
        } else if (c == ')') {
            nesting_levels.pop();
            max_nesting = std::max(max_nesting, (int)nesting_levels.size());
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.size());
        nesting_levels.pop();
    }

    return result;
}