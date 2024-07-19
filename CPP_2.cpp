#include <iostream>
#include <cmath>

double truncate_number(double number) {
    return number - std::floor(number);
}

int main() {
    double input;
    std::cin >> input;
    std::cout << truncate_number(input) << std::endl;
    
    return 0;
}