```cpp
#include <initializer_list>
#include <cassert>
#include <stack>
#include <iostream>

bool correct_bracketing(std::string brackets) {
    std::stack<char> bracket_stack;

    for (char bracket : brackets) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            bracket_stack.push(bracket);
        } else if (bracket == ')' || bracket == '}' || bracket == ']') {
            if (bracket_stack.empty()) {
                return false;
            }
            char topBrkt = bracket_stack.top();
            bracket_stack.pop();

            if ((topBrkt == '(' && bracket != ')') ||
                (topBrkt == '{' && bracket != '}') ||
                (topBrkt == '[' && bracket != ']')) {
                return false;
            }
        }
    }

    if (!bracket_stack.empty()) {
        while (!bracket_stack.empty()) {
            char topBrkt = bracket_stack.top();
            bracket_stack.pop();
            switch (topBrkt) {
                case '(':
                    return false;
                case '{':
                    return false;
                case '[':
                    return false;
            }
        }
    } else {
        return true;
    }
}

int main() {
    std::string brackets = "<><><<><>><>>><>";
    if (!correct_bracketing(brackets)) { 
        std::cout << "Invalid bracketing" << std::endl;
    }
    return 0;