#include <vector>
#include <numeric>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0f);
    float mean = sum / numbers.size();

    float mad = 0;
    for (float num : numbers) {
        mad += std::abs(num - mean);
    }
    return mad / numbers.size();
}