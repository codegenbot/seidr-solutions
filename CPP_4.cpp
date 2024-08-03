#include <vector>
#include <cmath>

float mean_abs_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += std::abs(num - mean);
    }
    float mean_abs_deviation = deviation_sum / numbers.size();

    return mean_abs_deviation;
}