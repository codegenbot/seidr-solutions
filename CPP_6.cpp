#include <stack>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> parse_nested_parens(const std::string &paren_string) {
    std::vector<int> result;
    std::stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = std::max(max_nesting, 1);
        } else if (c == ')') {
            nesting_levels.pop();
            max_nesting = std::max(max_nesting, nesting_levels.size());
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
    }

    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    return 0;
}