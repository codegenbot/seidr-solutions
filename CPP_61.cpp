#include <string>

int correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') count++;
        else if (c == ')') {
            if (count > 0) count--;
            else return 0; // parentheses not correctly nested
        }
    }
    if (count != 0) return 0; // unbalanced brackets
    return 1;