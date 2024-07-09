#include <vector>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers) {
    float mean = 0;
    for (const auto& num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float sum = 0;
    for (const auto& num : numbers) {
        sum += abs(num - mean);
    }

    return sum / numbers.size();
}