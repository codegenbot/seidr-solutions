#include <cassert>
#include <stack>
#include <string>

bool correct_bracketing(std::string brackets) {
    std::stack<char> bracket_stack;

    for (char bracket : brackets) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            bracket_stack.push(bracket);
        } else if (bracket == ')' || bracket == '}' || bracket == ']') {
            if (bracket_stack.empty()) {
                return false;
            }
            char opening_bracket = bracket_stack.top();
            bracket_stack.pop();

            if ((opening_bracket == '(' && bracket != ')') ||
                (opening_bracket == '{' && bracket != '}') ||
                (opening_bracket == '[' && bracket != ']')) {
                return false;
            }
        }
    }

    if (!bracket_stack.empty()) {
        while (!bracket_stack.empty()) {
            char opening_bracket = bracket_stack.top();
            bracket_stack.pop();
            switch (opening_bracket) {
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
    assert(!correct_bracketing("<><><<><>><>>><>"));
    
    return 0;
}