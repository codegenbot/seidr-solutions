#include <vector>
#include <cassert>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    float mean = 0;
    for (size_t i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }
    mean = sum / numbers.size();

    float deviation_sum = 0;
    for (size_t i = 0; i < numbers.size(); ++i) {
        deviation_sum += std::abs(numbers[i] - mean);
    }

    return deviation_sum / numbers.size();
}