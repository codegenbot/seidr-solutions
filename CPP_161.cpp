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
    std::cin >> s;  
    if (std::cin.ignore().peek() == '\n') {  
        std::cin.clear();
        s.pop_back();  
    }
    if (solve(s)) {
        std::cout << "The solution is: " << s << std::endl;
    } else {
        std::cout << "No solution exists. Please try again." << std::endl;
    }
    return 0;
}