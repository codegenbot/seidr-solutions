#include <cassert>
#include <cstring>
#include <iostream>
#include <string>

bool correct_bracketing(const std::string& bracket_string) {
    int count = 0;
    for (int i = 0; i < bracket_string.length(); i++) {
        if (bracket_string[i] == '<') {
            count++;
        }
        else if (bracket_string[i] == '>') {
            if (count <= 0) {
                std::cout << "Incorrect: Unbalanced closing bracket at position " << i+1 << "." << std::endl;
                return false;
            }
            count--;
        }
    }
    if (count > 0) {
        std::cout << "Incorrect: Unbalanced opening brackets." << std::endl;
        return false;
    }
    return true;

int main() {
    std::string bracket_string = "<><><<><>><>>><>";
    assert(!correct_bracketing(bracket_string));
    std::string brackets = "<<>";
    if (correct_bracketing(brackets)) std::cout << "Correct" << std::endl;
    else std::cout << "Incorrect" << std::endl;
    return 0;
}