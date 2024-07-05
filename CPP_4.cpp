#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0;
    for(float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float mad_sum = 0.0;
    for(float num : numbers) {
        mad_sum += std::fabs(num - mean);
    }
    return mad_sum / numbers.size();
}

// No main function required as per task description