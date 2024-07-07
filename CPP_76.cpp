#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    double log_value = log((double)x) / log((double)n);
    return floor(log_value + 0.5) == log_value;
}

int main() {
    int x, n;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    assert(is_simple_power(x, n)==true);
    return 0;
}