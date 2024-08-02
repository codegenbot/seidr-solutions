#include <cmath>
#include <vector>

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