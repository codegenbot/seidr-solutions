#include <iostream>

int largest_divisor(int n) {
    for (int i = n - 1; i > 0; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Largest divisor is: " << largest_divisor(n) << std::endl;
    return 0;
}