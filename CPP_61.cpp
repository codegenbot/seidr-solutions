#include <iostream>
#include <string>
#include <algorithm>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    std::for_each(brackets.begin(), brackets.end(), [&count](char c) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count == 0) {
                return false;
            }
            count--;
        }
    });
    return count == 0;
}