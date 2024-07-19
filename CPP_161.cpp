#include <iostream>
#include <string>

bool solve(std::string s) {
    if (s == "#CCC") { 
        return true;
    }
    return false;
}

int main() {
    std::string s;
    while(true){
        std::cout << "Enter a string: ";
        if(std::getline(std::cin, s)) break;  
    }   
    if (solve(s)) {
        std::cout << "The solution is: " << s << std::endl;
    } else {
        std::cout << "No solution exists. Please try again." << std::endl;
    }
    return 0;
}