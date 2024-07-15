bool correct_bracketing(std::string brackets) {
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

#include <iostream>
#include <string>
#include <cassert>

int main() {
    std::string brackets = "<><><<><>><>>><>";
    assert(!correct_bracketing(brackets));
    return 0;
}