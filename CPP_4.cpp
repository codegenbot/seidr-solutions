#include <vector>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers) {
    float mean = accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
    float sum_of_deviations = 0;
    for (float num : numbers) {
        sum_of_deviations += abs(num - mean);
    }
    return sum_of_deviations / numbers.size();
}