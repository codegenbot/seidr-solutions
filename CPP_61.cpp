#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool correct_bracketing(string brackets) {
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
    // Example usage
    assert(correct_bracketing("()()(()())"));
    assert(!correct_bracketing("()()(()())()))()"));

    cout << "All tests passed!" << endl;

    return 0;
}