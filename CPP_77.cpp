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
    int num;
    std::cout << "Enter a cube number (like 1729): ";
    std::cin >> num;
    
    if (isCube(num)) {
        std::cout << "You entered a cube number: " << num << std::endl;
    } else {
        std::cout << "You entered a non-cube number: " << num << std::endl;
    }
    return 0;
}