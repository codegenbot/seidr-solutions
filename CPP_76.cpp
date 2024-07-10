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
    std::string xStr;
    std::cout << "Enter a number: ";
    int tempX;
    std::cin >> tempX;
    xStr = std::to_string(tempX);

    std::string nStr;
    std::cout << "Enter another number: ";
    int tempN;
    std::cin >> tempN;
    nStr = std::to_string(tempN);
    
    if(is_simple_power(std::stoi(xStr), std::stoi(nStr)))
        std::cout << (std::stoi(xStr) == pow(std::stod(nStr), log(std::stod(xStr)) / log(std::stod(nStr))) ? xStr + " is a simple power of " + nStr : xStr + " is not a simple power of " + nStr) << std::endl;
    else
        std::cout << (std::stoi(xStr) == pow(std::stod(nStr), log(std::stod(xStr)) / log(std::stod(nStr))) ? xStr + " is a simple power of " + nStr : xStr + " is not a simple power of " + nStr) << std::endl;

    return 0;
}