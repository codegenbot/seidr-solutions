```cpp
#include <vector>
#include <numeric>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float avg = mean(numbers);
    float sum = 0;
    for (auto num : numbers) {
        sum += std::abs(num - avg);
    }
    return sum / numbers.size();
}

float mean(const std::vector<float>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    float result = mean_absolute_deviation(numbers);
    return 0;
}