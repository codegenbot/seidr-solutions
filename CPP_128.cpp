#include <vector>
#include <cassert>
#include <cstdlib>
#include <algorithm>

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) return -32768;

    int product = 1;
    int sum_magnitudes = 0;

    for (int num : arr) {
        product *= (num == 0) ? 1 : num / std::abs(num);
        sum_magnitudes += std::abs(num);
    }

    return product * sum_magnitudes;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 2);

    return 0;
}