#include <vector>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers) {
    float mean = 0;
    for (const auto& num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float mad = 0;
    for (const auto& num : numbers) {
        mad += abs(num - mean);
    }
    return mad / numbers.size();
}