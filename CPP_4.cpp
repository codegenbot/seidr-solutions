#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float abs_diff_sum = 0.0;
    for (float num : numbers) {
        abs_diff_sum += std::abs(num - mean);
    }
    
    return abs_diff_sum / numbers.size();
}