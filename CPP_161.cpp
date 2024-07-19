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
        std::cin >> s;  
        if (solve(s)) {
            std::cout << "The solution is: " << s << std::endl;
            break; 
        } else {
            std::cout << "No solution exists. Please try again." << std::endl;
        }
    }
    return 0;
}