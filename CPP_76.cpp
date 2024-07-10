```cpp
#include <cmath>
#include <iostream>
#include <string>

bool is_simple_power(int x, int n) {
    if (n == 0) return false; 
    double y = pow(n, log(x) / log(n));
    return std::abs(y - x) < 1e-9; 
}

int main() {
    std::cout << "Enter a number: ";
    std::string tempXStr;
    std::cin >> tempXStr;
    int tempX = std::stoi(tempXStr);

    std::cout << "Enter another number: ";
    std::string nTempStr;
    std::cin >> nTempStr;
    int nTemp = std::stoi(nTempStr);

    if (nTemp != 0) {
        if(is_simple_power(tempX, nTemp))  
            std::cout << tempX << " is a simple power of " << nTemp << std::endl;
        else
            std::cout << tempX << " is not a simple power of " << nTemp << std::endl;
    } 
    else {
        std::cout << "n cannot be zero." << std::endl;
    }
}