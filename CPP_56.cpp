#include <cstring>

bool correct_bracketing(const char* brackets) {
    int count = 0;
    for(int i=0; i<std::strlen(brackets); i++){
        if(*brackets == '<'){
            count++;
        }
        else if(*brackets == '>'){
            if(count <= 0) return false;
            count--;
        }
        brackets++;
    }
    return count == 0;
}