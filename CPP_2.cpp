#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - std::floor(number);
}

int main_truncate_number() {
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    
    // Additional test cases can be added here
    
    return 0;
}