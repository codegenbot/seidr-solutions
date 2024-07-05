#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0, mean = 0.0, mad = 0.0;
    int n = numbers.size();

    for (float num : numbers) {
        sum += num;
    }
    mean = sum / n;

    for (float num : numbers) {
        mad += std::fabs(num - mean);
    }

    return mad / n;
}

int main() {
    assert(std::fabs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
    std::cout << "Test passed." << std::endl;
    return 0;
}