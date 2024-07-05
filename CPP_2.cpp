#include <iostream>
#include <cmath>

float truncate_number(float number) {
    return number - std::floor(number);
}

int main() {
    float number;
    std::cin >> number;
    std::cout << truncate_number(number) << std::endl;
    return 0;
}