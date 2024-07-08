#include <iostream>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int balance = 0;
    for (char c : brackets) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }
        if (balance < 0) {
            return false;
        }
    }
    return balance == 0;
}

int main() {
    assert(!correct_bracketing("()()(()())()))()"));
    return 0;
}