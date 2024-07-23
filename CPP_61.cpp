```c++
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    bool invalid = false;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '(')count++;
        else if(brackets[i] == ')')count--;
        else invalid = true;
    }
    return (count==0 && !invalid);
}