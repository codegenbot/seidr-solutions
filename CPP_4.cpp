#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float mean = 0.0;
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - mean);
    }

    return sum / numbers.size();
}