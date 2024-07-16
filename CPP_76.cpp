#include <iostream>
#include <cmath>

bool is_simple_power(int n, int x) {
    if (n == 1 && x == 1) {
        return true;
    }
    
    if (n == 1 || x == 1) {
        return false;
    }
    
    double result = log(x) / log(n);
    
    return (result - int(result)) == 0;
}

int main() {
    assert(is_simple_power(1, 12) == true);
    // Add more test cases here
    
    return 0;
}