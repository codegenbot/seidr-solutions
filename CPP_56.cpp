#include <iostream>
#include <vector>
#include <cassert>

bool correct_bracketing(const std::vector<char>& brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '<') {
            count++;
        } else if (c == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    assert(correct_bracketing({'<', '>', '<', '>'}));
    assert(!correct_bracketing({'<', '<', '>'}));
    assert(correct_bracketing({'>', '>'}));
    assert(!correct_bracketing({'<', '>'}));
    
    std::cout << "All test cases passed." << std::endl;
    return 0;
}