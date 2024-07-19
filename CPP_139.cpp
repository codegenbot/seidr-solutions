#include <cassert>

int special_factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * special_factorial(n-1) * special_factorial(n-1);
    }
}

int main() {
    assert(special_factorial(1) == 1);
    assert(special_factorial(2) == 2);
    assert(special_factorial(3) == 36);
    assert(special_factorial(4) == 6912);
    return 0;
}