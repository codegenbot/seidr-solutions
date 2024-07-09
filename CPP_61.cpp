#include <stack>
#include <string>
#include <iostream>
#include <ostream>

bool correct_bracketing(const std::string& s) {
    std::stack<char> stack;
    for (char c : s) {
        if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            if (stack.empty()) return false;
            stack.pop();
        }
    }
    return stack.empty();
}

int main_test() {
    assert(!correct_bracketing("()()(()())")); 
    std::cout << "Correct bracketing test passed." << std::endl;
    return 0;
}