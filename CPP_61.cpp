#include <string>

bool correct_bracketing(string brackets){
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '('){
            count++;
        }
        else if(brackets[i] == ')'){
            count--;
            if(count < 0){
                return false;
            }
        }
    }
    if(count == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    assert (not correct_bracketing("()()(()())()))()"));
    assert (correct_bracketing("()()(()())()"));
    assert (not correct_bracketing("))())()"));
    assert (correct_bracketing("(())"));
    return 0;
}