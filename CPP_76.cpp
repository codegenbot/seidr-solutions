```
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    if(is_simple_power(1, 12)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}