#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_level = max(max_level, 1);
        } else if (c == ')') {
            int level = nesting_levels.top();
            nesting_levels.pop();
            if (!nesting_levels.empty()) {
                result.push_back(level);
                max_level = max(max_level, level);
            }
        }
    }

    for (int i = 0; i < nesting_levels.size(); ++i) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
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