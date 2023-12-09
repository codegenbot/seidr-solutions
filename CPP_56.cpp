```
#include <iostream>
#include <stack>

bool correct_bracketing(std::string brackets) {
    std::stack<char> stack;
    for (auto& c : brackets) {
        if (c == '<') {
            stack.push(c);
        } else if (c == '>') {
            if (stack.empty()) {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}
```