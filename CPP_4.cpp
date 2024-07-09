```
#include <vector>
#include <cmath>
#include <numeric>

float mean_absolute_deviation(std::vector<float> numbers) {
    if (numbers.empty()) {
        throw std::runtime_error("Input vector is empty");
    }
    float sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(std::vector<float> numbers) {
    if (numbers.empty()) {
        throw std::runtime_error("Input vector is empty");
    }
    return std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
}