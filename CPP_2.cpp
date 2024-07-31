#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - std::floor(number);
}

int main() {
    double input_number;
    std::cin >> input_number;
    
    double truncated_number = truncate_number(input_number);
    std::cout << truncated_number << std::endl;

    return 0;
}