```cpp
#include <iostream>
#include <string>

int solve(std::string) { return 0; } 

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::getline(std::cin, s);  
    std::cout << solve(s) << std::endl;  
    return 0;
}