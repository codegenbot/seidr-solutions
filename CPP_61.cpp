#include <cassert>
#include <iostream>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '(')count++;
        else if(brackets[i] == ')')if(count > 0)count--; 
    }
    return count==0;
}

int main() {
    std::string brackets;
    std::cout << "Enter the brackets: ";
    std::getline(std::cin, brackets; 
    assert(!correct_bracketing(brackets)); 
    return 0;
}