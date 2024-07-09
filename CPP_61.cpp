```cpp
#include <iostream>
#include <stack>
#include <string>

bool correct_bracketing(const std::string& s) {
    std::stack<char> brackets;
    for (char c : s) {
        if (c == '(') {
            brackets.push(c);
        } else if (c == ')') {
            if (brackets.empty()) return false;
            brackets.pop();
        }
    }
    return brackets.empty();
}

int main() { 
    if (!correct_bracketing("()()(()())")) 
        std::cout << "Incorrect bracketing." << std::endl; 
    else
        std::cout << "Correct bracketing test passed." << std::endl;
    return 0;
}