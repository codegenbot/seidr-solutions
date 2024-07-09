```cpp
#include <string>

int correct_bracketing(std::string brackets){
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '<'){
            count++;
        }
        else if(brackets[i] == '>'){
            if(count <= 0) return -1;
            count--;
        }
    }
    return count;
}