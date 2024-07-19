#include <iostream>
#include <vector>
#include <cmath> // Include cmath header for pow function

double double_the_difference(double a, double b) {
    return 2 * std::fabs(a - b);
}

std::vector<float> lst = {1.5f, 2.0f, 3.0f, 4.5f, 5.0f}; // Declare lst at global scope
long long odd_sum = 0;

int main() {
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            odd_sum += static_cast<long long>(std::pow(num, 2)); // Use std::pow instead of pow
        }
    }

    double result = double_the_difference(odd_sum, 100.0);

    return 0;
}