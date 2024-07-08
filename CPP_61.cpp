#include <iostream>
#include <stack>
#include <string>

bool correct_bracketing(std::string s) {
    std::stack<char> bracket_stack;
    
    for(int i=0;i<s.length();i++){
        if(s[i] == '(')bracket_stack.push('(');
        else if(s[i] == ')'){
            if(bracket_stack.empty())return false; 
            else bracket_stack.pop();
        }
    }
    
    return bracket_stack.empty();
}

int main() {
    std::string s = "()()(()())()))";
    assert(!correct_bracketing(s));  
    std::cout << "Correct bracketing: " << (correct_bracketing("()")) << std::endl;
    return 0;
}