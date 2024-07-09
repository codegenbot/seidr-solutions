#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = max(max_nesting, 1);
        } else if (c == ')') {
            nesting_levels.pop();
            if (nesting_levels.empty()) {
                result.push_back(max_nesting);
                max_nesting = 0;
            }
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