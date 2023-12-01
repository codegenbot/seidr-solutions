#include <iostream>
#include <string>
#include <cassert>

using namespace std;

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
    assert(not (correct_bracketing("()()(()())()))()")));
    assert(correct_bracketing("((()))"));
    assert(not (correct_bracketing("(()))"));
    assert(correct_bracketing("()()"));
    cout << "All test cases passed!";
    return 0;
}