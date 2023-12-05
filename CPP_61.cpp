```
#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool correct_bracketing(string brackets) {
    stack<char> s;
    for (int i = 0; i < brackets.size(); i++) {
        if (brackets[i] == '(') {
            s.push(brackets[i]);
        } else if (brackets[i] == ')') {
            if (s.empty()) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}
```