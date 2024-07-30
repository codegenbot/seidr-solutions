#include <vector>
#include <algorithm>
#include <cassert>
#include <string>
#include <stack>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::string parse_nested_parens(std::string s) {
    std::stack<char> stack;
    std::string result = "";

    for (char c : s) {
        if (c == '(') {
            stack.push(c);
            result += c;
        } else if (c == ')') {
            if (!stack.empty() && stack.top() == '(') {
                stack.pop();
                result += c;
            }
        }
    }

    return result;
}