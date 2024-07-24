#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float mean = 0;
    for (const auto& number : numbers) {
        mean += number;
    }
    mean /= numbers.size();

    float sum = 0;
    for (const auto& number : numbers) {
        sum += std::abs(number - mean);
    }

    return sum / numbers.size();
}