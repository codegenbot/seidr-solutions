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
    while (true) { 
        std::cout << "Enter a string: ";
        std::getline(std::cin, s);  
        if (solve(s)) {
            std::cout << "The solution exists: " << s << std::endl;
        } else {
            std::cout << "No solution exists. Please try again." << std::endl;
        }
    }
    return 0;
}