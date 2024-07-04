#include <iostream>
#include <limits>

int sum_to_n(int n) {
    if (n < 0) {
        return -1; // Return an error for invalid input
    }

    // Calculate sum, check for potential overflow
    if (n > 0 && n > (std::numeric_limits<int>::max() - n) / 2) {
        return -1; // Return an error if the result would overflow
    }

    return n * (n + 1) / 2;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = sum_to_n(n);
    if (result == -1) {
        std::cout << "Error: invalid input or overflow detected\n";
    } else {
        std::cout << "Sum of first " << n << " natural numbers: " << result << "\n";
    }

    return 0;
}