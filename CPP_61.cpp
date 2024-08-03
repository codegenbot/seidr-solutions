#include <iostream>
#include <string>
#include <cassert>
#include <cstdlib>

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