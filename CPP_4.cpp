#include <vector>
#include <cassert>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float absolute_diff_sum = 0.0;
    for (float num : numbers) {
        absolute_diff_sum += std::abs(num - mean);
    }
    
    return absolute_diff_sum / numbers.size();
}