```cpp
#include <string>
#include <stack>
#include <ostream>

std::string correct_bracketing(std::string brackets) {
    std::stack<char> bracket_stack(std::deque<char>());

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
    std::string input;
    // Read the input from user
    // For example, you can use getline function to read a line of text
    std::getline(std::cin, input);

    std::string result = correct_bracketing(input);

    std::cout << result << std::endl;

    return 0;
}