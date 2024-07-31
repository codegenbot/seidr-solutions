```cpp
#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(auto c : brackets) {
        if(c == '(') count++;
        else if(c == ')') {
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string brackets = "()()(()())()))));";
    assert(!correct_bracketing(brackets));
}