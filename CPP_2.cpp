#include <iostream>
#include <cmath>

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    // Read input
    double input_number;
    std::cin >> input_number;

    // Output truncated number
    std::cout << truncate_number(input_number) << std::endl;

    return 0;
}