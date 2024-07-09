```
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

float mean_absolute_deviation(vector<float> numbers_vector) {
    float sum = 0.0;
    for (float num : numbers_vector) {
        sum += abs(num - mean(numbers_vector));
    }
    return sum / numbers_vector.size();
}

float mean(vector<float> numbers_vector) {
    return std::accumulate(numbers_vector.begin(), numbers_vector.end(), 0.0f) / numbers_vector.size();
}