#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    if (n == 0) return false; 
    double y = pow(n, log(x) / log(n));
    return std::abs(y - x) < 1e-9;
}

int main() {
    int tempX, nTemp;
    std::cout << "Enter a number: ";
    std::cin >> tempX;

    std::cout << "Enter another number: ";
    std::cin >> nTemp;

    if (nTemp != 0) {
        std::string strTempX = std::to_string(tempX);
        std::string strnTemp = std::to_string(nTemp);

        if(is_simple_power(tempX, nTemp))  
            std::cout << strTempX << " is a simple power of " << strnTemp << std::endl;
        else
            std::cout << "Error: " << strTempX << " is not a simple power of " << strnTemp << std::endl;
    } 
    else {
        std::cout << "n cannot be zero." << std::endl;
    }
}