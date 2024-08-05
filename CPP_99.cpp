#include <cmath>
#include <cassert>

int closestInteger(double num) {
    return lround(num);
}

int main() {
    assert(closestInteger(0.5) == 1);
    assert(closestInteger(-3.7) == -4);
    
    return 0;
}