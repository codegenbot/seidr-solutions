#include <cmath>
#include <cassert>

double truncate_number(double num) {
    return num - static_cast<int>(num);
}

int main() {
    assert(std::abs(truncate_number(7.89) - 0.89) < 1e-4);
    assert(std::abs(truncate_number(99.999) - 0.999) < 1e-4);
    assert(std::abs(truncate_number(42.0) - 0.0) < 1e-4);
    
    return 0;
}