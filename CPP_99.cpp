#include <cmath>
#include <cassert>

int closestInteger(double num) {
    return static_cast<int>(round(num));
}

int main() {
    assert(closestInteger(4.5) == 5);
    assert(closestInteger(3.2) == 3);
    return 0;
}