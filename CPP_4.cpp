#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float sum_abs_diff = 0;
    for (float num : numbers) {
        sum_abs_diff += std::abs(num - mean);
    }
    float mad = sum_abs_diff / numbers.size();

    return mad;
}

int main() {
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    return 0;
}