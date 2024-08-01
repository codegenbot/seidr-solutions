#include <string>

bool correct_bracketing(std::string brackets){
    int opening = 0, closing = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '<'){
            opening++;
        }
        else{
            closing++;
        }
    }
    return opening == closing;