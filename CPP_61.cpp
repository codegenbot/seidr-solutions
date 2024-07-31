#include <iostream>
#include <string>

bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if ('(' == bracket) count++;
        else if (')' == bracket) {
            if (count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string brackets = "(()())()))));";
    assert(!correct_bracketing(brackets));
    if (!correct_bracketing(brackets)) { 
        std::cout << "The bracket sequence contains incorrect pairings." << std::endl;
    } else {
        std::cout << "The bracket sequence is correct." << std::endl;
    }
}