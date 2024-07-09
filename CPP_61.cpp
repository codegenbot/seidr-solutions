```
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
    std::cout << "Enter a string of brackets: ";
    std::getline(std::cin, input);
    
    if(correct_bracketing(input)) {
        std::cout << "The bracketing is correct." << std::endl;
    } else {
        std::cout << "The bracketing is incorrect." << std::endl;
    }
    
    return 0;
}