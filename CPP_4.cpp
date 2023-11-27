#include <iostream>
#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    float mean = 0.0;
    
    // Calculate the sum of all numbers
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    
    // Calculate the mean
    mean = sum / numbers.size();
    
    float absolute_diff_sum = 0.0;
    
    // Calculate the sum of absolute differences from the mean
    for (int i = 0; i < numbers.size(); i++) {
        absolute_diff_sum += std::abs(numbers[i] - mean);
    }
    
    // Calculate the mean absolute deviation
    float mad = absolute_diff_sum / numbers.size();
    
    return mad;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0};
    float mad = mean_absolute_deviation(numbers);
    
    std::cout << mad << std::endl;
    
    return 0;
}