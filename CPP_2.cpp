#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - floor(number);
}

void main() {
    double num;
    std::cin >> num;
    
    std::cout << truncate_number(num) << std::endl;
}