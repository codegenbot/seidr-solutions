#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float calculate_mean_absolute_deviation(const std::vector<float>& numbers) {
    float mean = 0;
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();
    
    float mad = 0;
    for (float num : numbers) {
        mad += std::abs(num - mean);
    }
    mad /= numbers.size();
    
    return mad;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0};
    float result = calculate_mean_absolute_deviation(numbers);
    std::cout << result << std::endl;
    
    assert(std::abs(calculate_mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
    
    return 0;
}