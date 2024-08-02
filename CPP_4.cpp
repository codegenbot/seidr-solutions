#include <cmath>
#include <vector>
#include <cassert>
#include <algorithm>

double mean_absolute_deviation(const std::vector<double>& numbers) {
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    double mean = sum / numbers.size();

    double deviation_sum = 0;
    for (double num : numbers) {
        deviation_sum += std::abs(num - mean);
    }
    return deviation_sum / numbers.size();
}

int main() {
    std::vector<double> numbers = {1.2, 2.4, 3.6, 4.8, 5.0}; // example input
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    double result = mean_absolute_deviation(numbers);
    return 0;
}