#include <iostream>
#include <vector>
#include <cmath>

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) return -32768;
    
    int sum_magnitudes = 0;
    int product_of_signs = 1;

    for (int num : arr) {
        sum_magnitudes += abs(num);
        if (num > 0) product_of_signs *= 1;
        else if (num < 0) product_of_signs *= -1;
        else product_of_signs *= 0;
    }

    return sum_magnitudes * product_of_signs;
}

int main() {
    // Test case
    std::cout << prod_signs({-1, 1, 1, 0}) << std::endl; // Expected output: 0
    return 0;
}