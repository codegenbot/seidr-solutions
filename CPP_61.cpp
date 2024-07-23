```c
#include <cassert>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '(')count++;
        else if (brackets[i] == ')') count--;
    }
    return count==0;
}

int main_test() {
    assert(!correct_bracketing("()()(()())"));
    return 0;
}