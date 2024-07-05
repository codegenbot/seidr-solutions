#include <iostream>
#include <vector>
#include <cmath> // For fabs and abs
#include <cassert>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    int n = numbers.size();
    if (n == 0) return 0.0;

    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / n;

    float mad_sum = 0.0;
    for (float num : numbers) {
        mad_sum += std::fabs(num - mean);
    }

    return mad_sum / n;
}

int main() {
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    std::cout << "Test passed!" << std::endl;
    return 0;
}