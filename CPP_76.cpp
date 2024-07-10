```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    if (n == 0) return false; 
    double y = pow(n, log(x) / log(n));
    return std::abs(y - x) < 1e-9; 
}

int main() {
    std::cout << "Enter a number: ";
    int tempX;
    std::string strX = std::to_string(tempX);
    std::cin >> strX;

    std::cout << "Enter another number: ";
    int nTemp;
    std::string strN = std::to_string(nTemp);
    std::cin >> strN;

    if (nTemp != 0) {
        if(is_simple_power(std::stoi(strX), std::stoi(strN)))  
            std::cout << strX << " is a simple power of " << strN << std::endl;
        else
            std::cout << strX << " is not a simple power of " << strN << std::endl;
    } 
    else {
        std::cout << "n cannot be zero." << std::endl;
    }
}