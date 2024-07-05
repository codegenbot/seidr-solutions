#include <iostream>
#include <string>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int balance = 0;
    for (char ch : brackets) {
        if (ch == '<') balance++;
        else if (ch == '>') balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}

int main() {
    assert(correct_bracketing("<><><<><>><>>><>") == false);
    std::cout << "Test passed.\n";
    return 0;
}