```
#include <iostream>
#include <stack>

bool correct_bracketing(std::string brackets) {
    std::stack<char> s;
    for (auto c : brackets) {
        if (c == '<') {
            s.push(c);
        } else if (c == '>') {
            if (s.empty() || s.top() != '<') {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}
```