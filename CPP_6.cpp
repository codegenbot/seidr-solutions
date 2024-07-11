#include <iostream>
#include <stack>
#include <vector>

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
            max_level = max(max_level, level);
        }
    }
    
    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
    }
    
    return result;
}

int main() {
    string paren_string = "(()()) ((())) () ((())()())";
    vector<int> result = parse_nested_parens(paren_string);
    
    for (int level : result) {
        cout << level << " ";
    }
    cout << endl;
    
    return 0;
}