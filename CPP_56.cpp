#include <initializer_list>
#include <stack>
#include <string>
#include <iostream>
#include <cassert>

std::string correct_bracketing(std::string brackets) {
    std::stack<char> bracket_stack;

    for (char bracket : brackets) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            bracket_stack.push(bracket);
        } else if (bracket == ')' || bracket == '}' || bracket == ']') {
            if (bracket_stack.empty()) {
                return "Invalid input";
            }
            char opening_bracket = bracket_stack.top();
            bracket_stack.pop();

            if ((opening_bracket == '(' && bracket != ')') ||
                (opening_bracket == '{' && bracket != '}') ||
                (opening_bracket == '[' && bracket != ']')) {
                return "Invalid input";
            }
        }
    }

    if (!bracket_stack.empty()) {
        std::string output;
        while (!bracket_stack.empty()) {
            char opening_bracket = bracket_stack.top();
            bracket_stack.pop();
            switch (opening_bracket) {
                case '(':
                    output += ')';
                    break;
                case '{':
                    output += '}';
                    break;
                case '[':
                    output += ']';
                    break;
            }
        }
        return output;
    } else {
        return "Valid input";
    }
}

int main() {
    if (correct_bracketing("<><><<><>><>>><>") != "Invalid input") { 
        assert(false); 
    }
    
    std::cout << correct_bracketing("<><><<><>><>>><>" << std::endl;
    
    return 0;
}