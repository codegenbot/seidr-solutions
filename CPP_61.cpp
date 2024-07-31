#include <iostream>
#include <string>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '(') {
            count++;
        } else if (bracket == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

int main() {
    assert(correct_bracketing("()()(()())()")); // Example test case
    assert(correct_bracketing("((()))")); // Test case with nested brackets
    assert(!correct_bracketing("())")); // Test case with incorrect bracketing
    assert(!correct_bracketing("(()")); // Test case with incorrect bracketing
    assert(correct_bracketing("")); // Test case with empty string
    assert(!correct_bracketing("(")); // Test case with unbalanced brackets
    assert(!correct_bracketing(")")); // Test case with unbalanced brackets
    assert(!correct_bracketing(")(")); // Test case with unbalanced brackets
    return 0;
}