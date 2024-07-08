#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation = 0;
    for (float num : numbers) {
        deviation += std::abs(num - mean);
    }
    return deviation / numbers.size();
}