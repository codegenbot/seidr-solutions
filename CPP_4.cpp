#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <cassert> // Add this line to include 'assert'

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0f);
    float mean = sum / numbers.size();
    
    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += std::abs(num - mean);
    }
    
    return deviation_sum / numbers.size();
}

int main() {
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
    return 0;
}