#include <iostream>
#include <stack>
using namespace std;

bool is_nested(string str) {
    stack<char> brackets;
    for (char c : str) {
        if (c == '[') {
            brackets.push(c);
        } else if (c == ']') {
            if (!brackets.empty() && brackets.top() == '[') {
                brackets.pop();
            } else {
                return true;
            }
        }
    }
    return false;
}