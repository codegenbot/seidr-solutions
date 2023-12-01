#include <iostream>
#include <stack>
using namespace std;

bool correct_bracketing(string brackets) {
    stack<char> s;
    for (char c : brackets) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (s.empty()) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}