#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <cassert>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0f);
    float mean = sum / numbers.size();

    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += std::abs(num - mean);
    }

    return deviation_sum / numbers.size();
}