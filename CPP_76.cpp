#include <iostream>
#include <cassert>
#include <cmath>

bool isSimplePower(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(n);
    
    return (result == (int)result);
}

int main() {
    assert(isSimplePower(1, 12) == true);
    
    return 0;
}