#include <cmath>
#include <cassert>

int closestInteger(double num) {
    return static_cast<int>(round(num));
}

int main() {
    assert (closestInteger(0) == 0);
}