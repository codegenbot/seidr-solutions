#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers){
    float sum = 0;
    float mean = 0;

    for (float num : numbers) {
        sum += num;
    }

    mean = sum / numbers.size();

    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += std::abs(num - mean);
    }

    return deviation_sum / numbers.size();
}