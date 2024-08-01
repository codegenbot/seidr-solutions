#include <vector>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers) {
    float mean = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
    float sum_of_deviations = std::accumulate(numbers.begin(), numbers.end(), 0.0f, 
        [&mean](float sum, float num) { return sum + std::abs(num - mean); });
    return sum_of_deviations / numbers.size();
}