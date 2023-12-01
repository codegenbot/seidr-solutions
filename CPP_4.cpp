#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0;
    float mean = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    mean = sum / numbers.size();

    float deviation_sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        deviation_sum += std::abs(numbers[i] - mean);
    }

    return deviation_sum / numbers.size();
}

int main() {
    assert(std::abs(mean_absolute_deviation(std::vector<float>{1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);

    return 0;
}