#include <cmath>
#include <vector>
#include <cassert>

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
    std::vector<double> numbers = {1.2, 2.6, 3.5, 5.1, 6.3};
    double result = mean_absolute_deviation(numbers);
    
    std::vector<double> test_numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(std::abs(mean_absolute_deviation(test_numbers) - 6.0/5.0) < 1e-4);
    
    return 0;
}