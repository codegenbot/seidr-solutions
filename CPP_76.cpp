#include <iostream>
#include <cassert>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    double result = std::log(x) / std::log(n);
    return (result == (int)result);
}

bool solve() {
    // Add your test cases here
    assert(is_simple_power(1, 12) == true);
    
    return true;
}

int main() {
    if (solve()) {
        std::cout << "All test cases passed." << std::endl;
    } else {
        std::cout << "Some test cases failed." << std::endl;
    }
    
    return 0;
}