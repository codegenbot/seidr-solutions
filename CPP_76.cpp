#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if(x == 1) return true;
    if(n == 1) return false;
    
    double result = log(x) / log(n);
    return (result == int(result));
}

int main() {
    assert(is_simple_power(1, 12) == true);
}