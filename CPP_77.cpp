```c++
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
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (isCube(num) == isCube(1729)) 
        std::cout << "The number is a cube." << std::endl; 
    else
        std::cout << "The number is not a cube." << std::endl; 

    return 0;
}