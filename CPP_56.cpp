```cpp
#include <iostream>
#include <string>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(char c : brackets){
        if(c == '<'){
            count++;
        }
        else if(c == '>'){
            if(count <= 0) return false;
            count--;
        }
    }
    return count == 0;

}

int main() {
    std::string brackets;
    std::cout << "Enter a string of brackets: ";
    getline(std::cin, brackets);  
    if(correct_bracketing(brackets)) {
        std::cout << "The bracketing is correct." << std::endl;
    } else {
        std::cout << "Error: The bracketing is incorrect. There are unmatched '>' characters." << std::endl;
    }
    
    return 0;
}