#include <cmath>
#include <iostream>

bool isSimplePower(int x) {
    for (int n = 2; n <= x; ++n) {
        if (is_simple_power(x, n)) {
            return true;
        }
    }
    return false;
}

bool is_simple_power(int x, int n){
    double y = pow(n, ceil(log2(x)));
    return (y == x);
}

int main() {
    std::cout << isSimplePower(81) << std::endl;
    return 0;
}