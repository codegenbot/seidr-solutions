#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum_magnitude = 0;

    for (int num : arr) {
        if (num > 0) {
            product *= 1;
            sum_magnitude += num;
        } else if (num < 0) {
            product *= -1;
            sum_magnitude += std::abs(num);
        }
    }

    return product * sum_magnitude;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    assert(prod_signs({-2, 3, -4, 5}) == -10);
    assert(prod_signs({1, 2, 3, 4}) == 10);
    assert(prod_signs({-1, -2, -3, -4}) == 10);

    return 0;
}