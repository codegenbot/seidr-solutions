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
    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0}; // updated input
    assert(std::abs(mean_absolute_deviation(numbers) - 6.0 / 5.0) < 1e-4);
    return 0;
}