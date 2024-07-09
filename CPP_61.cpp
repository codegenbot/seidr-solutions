```
#include <iostream>
#include <string>
#include <cassert>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for(char c : brackets){
        if(c == '(') count++;
        else if(c == ')') {
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;

}

int main() {
    assert(!correct_bracketing("()()(()())()))"));
    std::cout << "Correct bracketing test passed." << std::endl;
    return 0;
}