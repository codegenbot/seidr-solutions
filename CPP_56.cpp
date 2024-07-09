```cpp
#include <cassert>
#include <cstring>
#include <iostream>

bool correct_bracketing(const char* brackets){
    int count = 0;
    for(int i=0; i<strlen(brackets); i++){
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
    assert(not correct_bracketing("<><><<><>><>>><>"));
    char brackets[] = "<<>";
    std::cout << (correct_bracketing((char*)brackets) ? "Correct" : "Incorrect") << std::endl;
    return 0;
}