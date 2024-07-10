#include <cmath>
#include <iostream>
#include <string>

bool is_simple_power(int x, int n) {
    if (n == 0) return false; 
    double y = pow(n, log(x) / log(n));
    return std::abs(y - x) < 1e-9;
}

int main() {
    int tempX;
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> tempX;

    std::cout << "Enter another number: ";
    std::cin >> input;

    if (input != "0") {
        if(is_simple_power(tempX, std::stoi(input)))  
            std::cout << tempX << " is a simple power of " << input << std::endl;
        else
            std::cout << "Error: " << tempX << " is not a simple power of " << input << std::endl;
    } 
    else {
        std::cout << "n cannot be zero." << std::endl;
    }
}