```cpp
#include <iostream>
#include <string>
#include <limits>

bool correct_bracketing(std::string brackets){
    int count = 0;
    for(std::string::iterator it = brackets.begin(); it != brackets.end(); ++it){
        if(*it == '<'){
            count++;
        }
        else if(*it == '>'){
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
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if(correct_bracketing(brackets)) {
        std::cout << "The bracketing is correct." << std::endl;
    } else {
        std::cout << "Error: The bracketing is incorrect. There are unmatched '>' characters." << std::endl;
    }
    
    return 0;
}