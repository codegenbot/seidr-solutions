#include <iostream>
#include <cmath>

double truncate_number(double number) {
    return number >= 0 ? number - floor(number) : number - ceil(number);
}

int main() {
    assert(abs(truncate_number(123.456) - 0.456) < 1e-4);
    return 0;
}