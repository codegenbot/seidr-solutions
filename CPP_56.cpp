#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for(int i=0; i<brackets.length(); i++) {
        if(brackets[i] == '<') {
            count++;
        }
        else if(brackets[i] == '>') {
            if(count == 0) {
                return false;
            }
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string brackets;
    std::cin >> brackets;
    
    if(correct_bracketing(brackets)) {
        std::cout << "Bracketing is correct" << std::endl;
    } else {
        std::cout << "Bracketing is incorrect" << std::endl;
    }
    
    return 0;
}