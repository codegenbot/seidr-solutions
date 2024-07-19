```cpp
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
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);  
    if (solve(s)) {
        std::cout << "The solution is: " << s << std::endl;
    } else {
        std::cout << "No solution exists. Please try again." << std::endl;
    }
    return 0;
}