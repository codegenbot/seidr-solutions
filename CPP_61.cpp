#include <iostream>
#include <stack>
#include <string>

bool correct_bracketing(std::string s) {
    std::stack<char> stack;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(')stack.push('(');
        else if(s[i] == ')'){
            if(stack.empty())return false;
            else stack.pop();
        }
    }
    return stack.empty();
}

int main() {
    std::string s = "()()(()())()))";
    assert(!correct_bracketing(s));  
    std::cout << "Correct bracketing: " << (correct_bracketing("()")) << std::endl;
    return 0;
}