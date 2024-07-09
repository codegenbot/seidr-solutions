#include <stack>
#include <vector>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0, current_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
            nesting_levels.push(current_level);
            max_nesting = max(max_nesting, current_level);
        } else if (c == ')') {
            current_level--;
            if (current_level == 0) {
                result.push_back(max_nesting);
                max_nesting = 0;
                while (!nesting_levels.empty()) {
                    nesting_levels.pop();
                }
            }
        }
    }

    return result;
}