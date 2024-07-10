#include <stack>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(0);
        } else if (c == ')') {
            int level = nesting_levels.top();
            nesting_levels.pop();
            while (!result.empty() && result.back() > level) {
                result.pop_back();
            }
            if (!nesting_levels.empty()) {
                while (result.size() <= level - 1) {
                    result.push_back(level);
                }
            }
        }
    }
    return result;
}