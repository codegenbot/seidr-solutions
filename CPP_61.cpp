#include <iostream>
#include <string>

bool correct_bracketing(const std::string& s) {
    int open = 0, close = 0;
    for (char c : s) {
        if (c == '(') open++;
        else close++;
        if (close > open) return false; // wrong closing order
    }
    return open == close; // same number of opening and closing brackets
}

int main() {
    assert(correct_bracketing("()()(()())"));
    std::cout << "Correct bracketing test passed." << std::endl;
    return 0;
}