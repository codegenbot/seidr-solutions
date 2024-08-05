#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - floor(number);
}

int solve_problem() {
    assert(abs(truncate_number(123.456) - 0.456) < 1e-4);
    std::cout << "Tests passed successfully" << std::endl;
    
    return 0;
}