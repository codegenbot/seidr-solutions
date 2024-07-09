#include <iostream>
#include <cassert>
#include <cmath>

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    assert (std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    // Add more test cases as needed

    return 0;
}