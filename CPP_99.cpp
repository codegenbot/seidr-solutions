#include <cmath>
#include <cassert>

int closestInteger(double num) {
    return static_cast<int>(round(num));
}

int main() {
    assert(closestInteger(5.7) == 6);
    
    return 0;
}