```c
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

float mean(float x, int n) {
    return x / n;
}

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - mean(numbers[0], numbers.size()));
    }
    return sum / numbers.size();
}