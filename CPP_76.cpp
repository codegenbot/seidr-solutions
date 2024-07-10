#include <cmath>
#include <iostream>
#include <string>

bool is_simple_power(int x, int n);

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    std::string xStr;
    std::cout << "Enter a number: ";
    std::getline(std::cin, xStr);
    int x = std::stoi(xStr);

    std::string nStr;
    std::cout << "Enter another number: ";
    std::getline(std::cin, nStr);
    int n = std::stoi(nStr);
    
    if(is_simple_power(x, n))
        std::cout << std::to_string(x) << " is a simple power of " << std::to_string(n) << std::endl;
    else
        std::cout << std::to_string(x) << " is not a simple power of " << std::to_string(n) << std::endl;

    return 0;
}