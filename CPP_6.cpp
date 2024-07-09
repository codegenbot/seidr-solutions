#include <stack>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_level;
    int max_nesting = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            nesting_level.push(1);
            max_nesting = max(max_nesting, 1);
        } else if (c == ')') {
            int current_nesting = nesting_level.top();
            nesting_level.pop();
            result.push_back(current_nesting);
            max_nesting = max(max_nesting, current_nesting);
        }
    }
    
    return result;
}