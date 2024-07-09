#include <vector>
#include <cmath>
#include <numeric>

double mean(std::vector<float> numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
}

double mean_absolute_deviation(std::vector<float> numbers) {
    double sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return sum / numbers.size();
}