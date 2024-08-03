#include <vector>
#include <cassert>
#include <cmath>

int prod_signs(const std::vector<int>& arr) {
    assert(!arr.empty());

    int product = 1;
    int sum_magnitudes = 0;

    for (int num : arr) {
        product *= (num == 0) ? 1 : num / std::abs(num);
        sum_magnitudes += std::abs(num);
    }

    return product * sum_magnitudes;
}