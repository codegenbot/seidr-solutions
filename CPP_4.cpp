#include <vector>
#include <numeric>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation = 0.0;
    for (float num : numbers) {
        deviation += std::abs(num - mean);
    }
    float mad = deviation / numbers.size();

    return mad;
}