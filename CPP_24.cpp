#include <iostream>
#include <cassert>

int largest_divisor(int n) {
    for (int i = n / 2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << largest_divisor(n) << std::endl;
    return 0;
}