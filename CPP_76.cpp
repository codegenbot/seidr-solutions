```
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    if(n == 0)
        return (x == 1);
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    std::cout << "True" << std::endl;
}