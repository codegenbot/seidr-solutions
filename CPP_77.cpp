```cpp
#include <cassert>
#include <iostream>

bool isCube(int n) {
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;

}

int main() { 
    std::string num_str;
    std::cout << "Enter a cube number (like 1729): ";
    std::cin >> num_str;

    if (isCube(std::stoi(num_str)))
        std::cout << "You entered: " << num_str << std::endl; 
    else
        std::cout << "Invalid input." << std::endl;
    
    return 0;
}