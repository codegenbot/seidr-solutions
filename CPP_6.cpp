#include <stack>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> parse_nested_parens(const string &paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push((int)1);
            max_nesting = std::max(nesting_levels.size(), (int)1); 
        } else if (c == ')') {
            nesting_levels.pop();
            max_nesting = std::max(max_nesting, (int)nesting_levels.size());
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
    }

    std::reverse(result.begin(), result.end()); 
    return result;
}