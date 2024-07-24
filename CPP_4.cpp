#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float mean = 0;
    for (const auto& num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float dev = 0;
    for (const auto& num : numbers) {
        dev += std::abs(num - mean);
    }

    return dev / numbers.size();
}

int main() {
    std::vector<float> numbers;
    // Define your code here
    // For example:
    numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(std::abs(mean_absolute_deviation(numbers) - 6.0 / 5.0) < 1e-4);
    return 0;
}