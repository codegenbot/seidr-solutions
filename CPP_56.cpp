#include <iostream>
#include <string>

int correct_bracketing(std::string brackets){
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '<'){
            count++;
        }
        else if(brackets[i] == '>'){
            if(count <= 0) return 0;
            count--;
        }
    }
    return count;
}

int main() {
    assert(correct_bracketing("<><><<><>><>>><>") == 0);
    std::cout << "Correct bracketing" << std::endl;
    return 0;
}