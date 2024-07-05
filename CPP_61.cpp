#include <string>
#include <cassert>

bool correct_bracketing(std::string brackets) {
    int balance = 0;
    for (char ch : brackets) {
        if (ch == '(') {
            balance++;
        } else if (ch == ')') {
            balance--;
        }
        if (balance < 0) {
            return false;
        }
    }
    return balance == 0;
}

int main() {
    // Example test cases
    assert(correct_bracketing("()()"));
    assert(correct_bracketing("(())"));
    assert(!correct_bracketing("(()"));
    assert(!correct_bracketing(")("));
    assert(!correct_bracketing("()()(()())()))()"));
    return 0;
}