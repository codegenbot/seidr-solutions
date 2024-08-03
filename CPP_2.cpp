#include <iostream>
#include <cmath>
#include <cassert> // Include <cassert> header

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    assert(fabs(truncate_number(123.456) - 0.456) < 1e-4); // Use assert from <cassert>

    return 0;
}