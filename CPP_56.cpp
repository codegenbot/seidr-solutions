#include <cassert>
#include <cstring>
#include <iostream>

bool correct_bracketing(const char* brackets, int length){
    int count = 0;
    for(int i=0; i<length; i++){
        if(brackets[i] == '<'){
            count++;
        }
        else if(brackets[i] == '>'){
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

int main 
{
    int length = sizeof(char) * 22; // size of the array
    assert(not correct_bracketing("<><><<><>><>>><>", length));
    char brackets[] = "<<>";
    if(correct_bracketing((char*)brackets, sizeof(brackets)/sizeof(char))) std::cout << "Correct" << std::endl;
    else std::cout << "Incorrect" << std::endl;
    return 0;
}