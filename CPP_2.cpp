#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - floor(number);
}

main {
    double input;
    std::cin >> input;
    std::cout << truncate_number(input) << std::endl;
    return 0;
}