#include <iostream>
#include <string>
#include <stack>

bool is_nested(std::string str) {
    std::stack<char> brackets;
    for (char c : str) {
        if (c == '[' || c == '{' || c == '(') {
            brackets.push(c);
        } else if ((c == ']' && !brackets.empty() && brackets.top() == '[') ||
                   (c == '}' && !brackets.empty() && brackets.top() == '{') ||
                   (c == ')' && !brackets.empty() && brackets.top() == '(' && !brackets.empty())) {
            brackets.pop();
        } else {
            return false;
        }
    }
    return brackets.empty();
}