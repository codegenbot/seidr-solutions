#include <iostream>
#include <cassert>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int balance = 0;
    for(char ch : brackets) {
        if(ch == '<') balance++;
        else if(ch == '>') balance--;
        if(balance < 0) return false;
    }
    return balance == 0;
}

int main() {
    assert(correct_bracketing("<><><<><>><>>><>") == false);
    assert(correct_bracketing("<<>>") == true);
    assert(correct_bracketing("<><>") == true);
    std::cout << "All tests passed." << std::endl;
    return 0;
}