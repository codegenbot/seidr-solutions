#include <iostream>
#include <cmath>
#include <cassert> // Add this line to include assert

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4); // Ensure to use assert from cassert
    return 0;
}