#include <cassert>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '(')count++;
        else if(brackets[i] == ')')if(count > 0)count--; 
    }
    return count==0;
}

int main() {
    std::string brackets;
    // read input from user
    // process the string as needed
    assert(!correct_bracketing("()()(()())")); 
    return 0;
}