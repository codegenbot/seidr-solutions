#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0, mean = 0.0;
    
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float deviation = 0.0;
    for (float num : numbers) {
        deviation += std::abs(num - mean);
    }

    return deviation / numbers.size();
}