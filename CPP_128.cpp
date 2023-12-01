#include <iostream>
#include <vector>

int prod_signs(vector<int> arr) {
    // Return -32768 for empty arr
    if (arr.empty()) {
        return -32768;
    }

    int prod = 1;
    int sum = 0;

    for (int num : arr) {
        // Multiply product by sign of number
        if (num > 0) {
            prod *= 1;
        } else if (num < 0) {
            prod *= -1;
        } else {
            prod *= 0;
        }

        // Calculate sum of magnitudes
        sum += abs(num);
    }

    return prod * sum;
}