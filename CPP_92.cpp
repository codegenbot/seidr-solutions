#include <cassert>
#include <cmath>

bool any_int(double a, double b, double c) {
    return std::abs(a - static_cast<int>(a)) < std::numeric_limits<double>::epsilon() ||
           std::abs(b - static_cast<int>(b)) < std::numeric_limits<double>::epsilon() || 
           std::abs(c - static_cast<int>(c)) < std::numeric_limits<double>::epsilon();
}

int main() {
    assert (any_int(3.01, 4, 7) == false);
    return 0;
}