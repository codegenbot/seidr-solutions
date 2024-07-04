#include <cmath>
#include <cassert>

// Function to get the fractional part of a number
double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    assert(abs(truncate_number(123.456) - 0.456) < 1e-4);
    return 0;
}