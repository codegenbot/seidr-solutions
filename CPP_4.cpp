```cpp
#include <vector>
#include <cmath>
#include <initializer_list>
#include <cassert>
#include <numeric>

float mean(std::vector<float> numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0;
    for (const auto& num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return sum / numbers.size();
}