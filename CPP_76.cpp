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
    int x, n;
    std::cin >> x >> n;
    
    if (is_simple_power(x, n)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}