#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (n == 1 || n == 0) return x == 1;
    if (x == 1) return true;
    
    double res = log(x) / log(n);
    return (res - (int)res) == 0;
}

int main() {
    assert(is_simple_power(1, 12) == true);
    
    return 0;
}