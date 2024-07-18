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

int main() {
    int x, n;
    std::cin >> x >> n;
    std::cout << (is_simple_power(x, n) ? "true" : "false") << std::endl;
    return 0;
}