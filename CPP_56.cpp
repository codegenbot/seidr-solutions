```cpp
#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '<'){
            count++;
        }
        else if(brackets[i] == '>'){
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;

}

int main() {
    std::string brackets;
    std::cout << "Enter a string of brackets: ";
    std::cin >> brackets;
    
    if(correct_bracketing(brackets)) {
        std::cout << "The bracketing is correct." << std::endl;
    } else {
        std::cout << "Error: The bracketing is incorrect. There are unmatched '>' characters." << std::endl;
    }
    
    return 0;
}