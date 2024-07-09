#include <cassert>
#include <iostream>
#include <string>

bool correct_bracketing(const std::string& brackets){
    int count = 0;
    for(char c : brackets){
        if(c == '<'){
            count++;
        }
        else if(c == '>'){
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(not correct_bracketing("<><><<><>><>>><>"));
    std::string brackets = "<<>";
    std::cout << (correct_bracketing(brackets) ? "Correct" : "Incorrect") << std::endl;
    return 0;
}