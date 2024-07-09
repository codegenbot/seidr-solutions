```cpp
#include <cassert>
#include <cstring>
#include <iostream>

bool correct_bracketing(char* brackets){
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
    assert(!correct_bracketing((const char*)"<><><<><>><>>><>"));
    char brackets[] = "<<>";
    std::cout << (correct_bracketing(brackets) ? "Correct" : "Incorrect") << std::endl;
    return 0;
}