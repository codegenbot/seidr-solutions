#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(char c : brackets){
        if(c == '<'){
            count++;
        }
        else if(c == '>'){
            count--;
        }
        if(count < 0){
            return false;
        }
    }
    return count == 0;
}

int main(){
    assert(!correct_bracketing("<><><><><")); // Missing closing brackets
    assert(correct_bracketing("<><><>")); // Correct bracketing
    assert(!correct_bracketing("<><><<><>><>>><>")); // Incorrect bracketing
    std::cout << "All tests passed!" << std::endl;
    return 0;
}