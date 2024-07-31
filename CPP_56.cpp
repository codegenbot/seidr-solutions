#include <initializer_list>
#include <stack>
#include <string>
#include <cassert>

void correct_bracketing(std::string brackets) {
    std::stack<char> bracket_stack;

    for (char bracket : brackets) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            bracket_stack.push(bracket);
        } else if (bracket == ')' || bracket == '}' || bracket == ']') {
            if (bracket_stack.empty()) {
                return;
            }
            char opening_bracket = bracket_stack.top();
            bracket_stack.pop();

            if ((opening_bracket == '(' && bracket != ')') ||
                (opening_bracket == '{' && bracket != '}') ||
                (opening_bracket == '[' && bracket != ']')) {
                return;
            }
        }
    }

    if (!bracket_stack.empty()) {
        while (!bracket_stack.empty()) {
            char opening_bracket = bracket_stack.top();
            bracket_stack.pop();
            switch (opening_bracket) {
                case '(':
                    return;
                case '{':
                    return;
                case '[':
                    return;
            }
        }
    } else {
        return;
    }
}

int main() {
    if (!correct_bracketing("<><><<><>><>>><>") ) { 
        assert(false); 
    }
    
    return 0;
}