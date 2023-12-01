#include <string>
#include <cassert>

bool correct_bracketing(string brackets){
    int count = 0;
    for(char bracket : brackets){
        if(bracket == '('){
            count++;
        }
        else if(bracket == ')'){
            count--;
        }
        if(count < 0){
            return false;
        }
    }
    return count == 0;
}

int main() {
    assert(!correct_bracketing("()()(()())()))()"));
    // rest of the code
    return 0;
}