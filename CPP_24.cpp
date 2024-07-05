#include <iostream>

int largest_divisor(int n) {
    for (int i = n / 2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1; // This line will never be reached for n > 1
}

int main() {
    int n;
    std::cin >> n; // Read input from user
    std::cout << largest_divisor(n) << std::endl; // Output the result
    return 0;
}