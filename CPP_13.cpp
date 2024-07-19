#include <iostream>
#include <cassert>

int greatest_common_divisor(int a, int b) {
    if (b == 0)
        return a;
    return greatest_common_divisor(b, a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a < 0 || b < 0) {
        std::cerr << "Please enter non-negative numbers." << std::endl;
        return 1;
    }
    std::cout << greatest_common_divisor(a, b);
    return 0;
}