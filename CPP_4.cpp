#include <vector>
#include <cmath>
#include <cassert>  // Include the assert header

float calculate_mean_abs_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += std::abs(num - mean);
    }
    float mean_abs_deviation = deviation_sum / numbers.size();

    return mean_abs_deviation;
}

int main() {
    assert(std::abs(calculate_mean_abs_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 2.0) < 1e-4);
    return 0;
}