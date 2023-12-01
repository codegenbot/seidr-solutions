#include <iostream>
#include <cmath>
#include <cassert>

float truncate_number(float number){
    return number - floor(number);
}

int main() {
    // Test the code
    assert (std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    
    // Add additional test cases here
    
    return 0;
}