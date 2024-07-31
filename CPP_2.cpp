#include <iostream>
#include <cmath>

double truncate_number(double number) {
    return number - std::floor(number);
}

double calculate_fractional_part() {
    double number;
    std::cin >> number;
    double fractionalPart = truncate_number(number);
    std::cout << fractionalPart << std::endl;
    
    return fractionalPart;
}