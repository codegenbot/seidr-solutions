```cpp
#include <vector>
#include <cmath>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += abs(num - calculate_mean(numbers));
    }
    return sum / numbers.size();
}

float calculate_mean(vector<float> numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}