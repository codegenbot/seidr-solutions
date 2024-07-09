```cpp
#include <string>
#include <cassert>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(int i=0; i<brackets.size(); i++){
        if(brackets[i] == '<'){
            count++;
        }
        else if(brackets[i] == '>'){
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    assert(!correct_bracketing("<><><<><>><>>><>"));
    std::string brackets("<<>");
    std::cout << correct_bracketing(brackets) << std::endl;
    return 0;
}