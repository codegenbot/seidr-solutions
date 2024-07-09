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
    int n;
    std::cout << "Enter a cube number (like 1729): ";
    std::cin >> n;

    assert(isCube(1729) == false);

    if (isCube(n))
        std::cout << "You entered: " << n << std::endl; 
    else
        std::cout << "Invalid input." << std::endl;
    
    return 0;
}