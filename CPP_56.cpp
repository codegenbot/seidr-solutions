#include <iostream>
#include <string>
#include <cassert>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (size_t i = 0; i < brackets.size(); ++i) {
        char c = brackets[i];
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
    assert( !correct_bracketing("<><><<><>><>>><>") );
    return 0;
}