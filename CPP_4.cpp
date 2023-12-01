#include <algorithm>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers) {
    float mean = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
    float sum_abs_diff = 0.0;

    for (float num : numbers) {
        sum_abs_diff += abs(num - mean);
    }

    return sum_abs_diff / numbers.size();
}