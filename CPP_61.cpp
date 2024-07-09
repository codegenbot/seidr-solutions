#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(char c : brackets){
        if(c == '(') count++;
        else if(c == ')') {
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0; 
}

int main() {
    std::string input;
    std::cout << "Enter your string: ";
    std::cin >> input;
    
    if(correct_bracketing(input)) {
        std::cout << "Correct bracketing" << std::endl;
    } else {
        std::cout << "Incorrect bracketing" << std::endl;
    }
    
    return 0;
}