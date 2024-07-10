```cpp
#include <cmath>
#include <iostream>
#include <string>

bool is_simple_power(int x, int n) {
    if (n == 0) return false; 
    std::string strY = std::to_string(round(pow(n, log(x) / log(n)))); 
    return (strY.size() == std::to_string(x).size() && strY == std::to_string(x));
}

int main() {
    std::cout << "Enter a number: ";
    int tempX;
    std::cin >> tempX;

    std::cout << "Enter another number: ";
    int nTemp;
    std::cin >> nTemp;

    if (nTemp != 0) {
        if(is_simple_power(tempX, nTemp))  
            std::cout << tempX << " is a simple power of " << nTemp << std::endl;
        else
            std::cout << "Error: " << tempX << " is not a simple power of " << nTemp << std::endl;
    } 
    else {
        std::cout << "n cannot be zero." << std::endl;
    }
}