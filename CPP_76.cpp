#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(n);
    return (result - (int)result == 0);
}

int main() {
    // Your main function code here
    return 0;
}