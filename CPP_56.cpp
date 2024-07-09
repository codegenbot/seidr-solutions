```cpp
#include <cassert>
#include <cstring>
#include <iostream>

bool correct_bracketing(const char* bracket_string, int length){
    int count = 0;
    for(int i=0; i<length; i++){
        if(bracket_string[i] == '<'){
            count++;
        }
        else if(bracket_string[i] == '>'){
            if(count <= 0) {
                std::cout << "Incorrect: Unbalanced closing bracket at position " << i+1 << "." << std::endl;
                return false;
            }
            count--;
        }
    }
    if(count > 0) {
        std::cout << "Incorrect: Unbalanced opening brackets." << std::endl;
        return false;
    }
    return true;

int main() {
    char bracket_string[] = "<><><<><>><>>><>";
    assert(!correct_bracketing(bracket_string, sizeof(bracket_string)/sizeof(char)));
    char brackets[] = "<<>";
    if(correct_bracketing((char*)brackets, sizeof(brackets)/sizeof(char))) std::cout << "Correct" << std::endl;
    else std::cout << "Incorrect" << std::endl;
    return 0;
}