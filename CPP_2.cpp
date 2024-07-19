#include <cmath>
#include <iostream>
#include <cassert>

// Function signature
double truncate_number(double number) {
    return number - std::floor(number);
}

int main() {
    // Test the function
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    
    return 0;
}