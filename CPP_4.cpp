#include <vector>
#include <cmath>
#include <cassert> // Add this line

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

int main() {
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 1.0) < 1e-4); // Fix the expected result
    return 0;
}