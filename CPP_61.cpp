#include <iostream>
#include <string>
#include <cassert>

bool correct_bracketing(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            ++count;
        } else if (c == ')') {
            if (count <= 0) return false;
            --count;
        }
    }
    return count == 0;
}

int main() {
    assert(correct_bracketing("()()(()())")); 
    std::cout << "Correct bracketing test passed." << std::endl;
    return 0;
}