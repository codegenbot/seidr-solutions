#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float mad = 0;
    for (float num : numbers) {
        mad += std::abs(num - mean);
    }
    return mad / numbers.size();
}