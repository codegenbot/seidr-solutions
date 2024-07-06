#include <cmath>
#include <vector>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0f;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    float mad = 0.0f;
    for (float num : numbers) {
        mad += std::abs(num - mean);
    }
    return mad / numbers.size();
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert (std::abs(mean_absolute_deviation(numbers) - 6.0/5.0) < 1e-4);
}