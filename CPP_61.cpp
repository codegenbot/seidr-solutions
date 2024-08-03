#include <iostream>
#include <cstdlib>
#include <cassert>

int correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count == 0) {
                return -1;
            }
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string inputString = "(()())";
    std::cout << correct_bracketing(inputString);
    return EXIT_SUCCESS;
}