#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>
#include <numeric>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    if (numbers.empty()) return 0.0;

    float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0f);
    float mean = sum / numbers.size();

    float mad_sum = 0.0;
    for (float num : numbers) {
        mad_sum += std::fabs(num - mean);
    }

    return mad_sum / numbers.size();
}

int main() {
    assert (std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
    std::cout << "Test Passed!" << std::endl;
    return 0;
}