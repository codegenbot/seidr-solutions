#include <vector>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers) {
    float mean = accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
    float mad = 0;
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    return mad / numbers.size();
}