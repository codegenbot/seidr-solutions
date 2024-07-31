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
    assert(correct_bracketing("((()))")); // Test case with all brackets correctly nested
    assert(!correct_bracketing("(()")); // Test case with incorrect nesting
    assert(!correct_bracketing("())")); // Test case with incorrect nesting
    assert(correct_bracketing("")); // Test case with empty string
    assert(!correct_bracketing("(")); // Test case with single opening bracket
    assert(!correct_bracketing(")")); // Test case with single closing bracket
    assert(correct_bracketing("()")); // Test case with only one pair of brackets
    assert(!correct_bracketing(")(")); // Test case with reversed brackets
    return 0;
}