#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    for (auto num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return static_cast<float>(sum / numbers.size());
}

float mean(std::vector<float> numbers) {
    float sum = 0.0;
    for (auto num : numbers) {
        sum += num;
    }
    return static_cast<float>(sum / numbers.size());
}