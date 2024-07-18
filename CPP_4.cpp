#include <iostream>
#include <vector>
#include <cassert>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += std::abs(num - mean);
    }
    float mean_absolute_deviation = deviation_sum / numbers.size();

    return mean_absolute_deviation;
}

int main() {
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    
    std::cout << "Mean Absolute Deviation: " << mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) << std::endl;
    
    return 0;
}