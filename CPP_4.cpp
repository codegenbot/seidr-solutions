```cpp
#include <vector>
#include <cmath>
#include <algorithm>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0;
    for (auto num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(const std::vector<float>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}