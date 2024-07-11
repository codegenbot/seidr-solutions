#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float m = mean(numbers);
    return std::accumulate(numbers.begin(), numbers.end(), 0.0, 
        [m](float sum, float num){ return std::abs(num - m) + sum; }) / numbers.size();
}

float mean(const std::vector<float>& numbers) {
    return static_cast<float>(std::accumulate(numbers.begin(), numbers.end(), 0.0)) / numbers.size();
}