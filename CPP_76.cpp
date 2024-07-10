```cpp
#include <cmath>
#include <iostream>
#include <string>

bool is_simple_power(int x, int n);

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    std::cout << "Enter a number: ";
    int tempX;
    std::cin >> tempX;

    std::string sTempN; 
    std::cout << "Enter another number: ";
    std::getline(std::cin, sTempN);

    if(is_simple_power(tempX, stoi(sTempN)))  
        std::cout << tempX << " is a simple power of " << sTempN << std::endl;
    else
        std::cout << tempX << " is not a simple power of " << sTempN << std::endl;

    return 0;
}