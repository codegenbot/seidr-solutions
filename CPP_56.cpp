#include <string>
#include <cassert>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for(int i = 0; i < brackets.size(); i++){
        if(brackets[i] == '<'){
            count++;
        } else if(brackets[i] == '>'){
            if(count == 0){
                return 0;
            }
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(!correct_bracketing("<><><<><>><>>><>"));
    
    return 0;
}