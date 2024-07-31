#include <iostream>
#include <string>
#include <cassert>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(int i=0; i<brackets.size(); i++){
        if('(' == brackets[i]) count++;
        else if(')' == brackets[i]) {
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string brackets = "(()())()))));";
    assert(!correct_bracketing(brackets));
    if(correct_bracketing(brackets)) {
        std::cout << "The bracket sequence is correct." << std::endl;
    } else {
        std::cout << "The bracket sequence contains incorrect pairings." << std::endl;
    }
}