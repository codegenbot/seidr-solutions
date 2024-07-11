#include <vector>
#include <numeric>
#include <cmath>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0;
    for (auto num : numbers) {
        sum += abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(const vector<float>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
}