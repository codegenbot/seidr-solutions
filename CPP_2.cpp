#include <cmath>

double truncate_number(double number) {
    return number - floor(number);
}

// assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);