```cpp
#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for (char bracket : brackets) {
        if ('(' == bracket) count++;
        else if (')' == bracket) {
            if (count <= 0) {
                std::cout << "Incorrect pairing at the end." << std::endl; 
                return false;
            }
            count--;
        }
    }
    if(count > 0) std::cout << "Unclosed parentheses." << std::endl;
    return !std::cout.fail();
}

int main() {
    std::string brackets = "(()())()))));";
    assert(!correct_bracketing(brackets));
    if(correct_bracketing(brackets)) {
        std::cout << "The bracket sequence is correct." << std::endl;
    } else {
        std::cout << "The bracket sequence contains incorrect pairings." << std::endl;
    }
}