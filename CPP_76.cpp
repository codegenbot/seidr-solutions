#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    if (n == 0) return false; 
    double y = pow(n, log(x) / log(n));
    return std::abs(y - x) < 1e-9;
}

int main() {
    int tempX, n;
    std::cout << "Enter a number: ";
    std::string inputX; std::cin >> inputX;

    std::cout << "Enter another number (n): ";
    std::string inputN; std::cin >> inputN;

    tempX = stoi(inputX);
    n = stoi(inputN);

    if (n != 0) {
        if(is_simple_power(tempX, n))  
            std::cout << inputX << " is a simple power of " << inputN << std::endl;
        else
            std::cout << "Error: " << inputX << " is not a simple power of " << inputN << std::endl;
    } 
    else {
        std::cout << "n cannot be zero." << std::endl;
    }
}