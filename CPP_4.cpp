#include <vector>
#include <cmath>
#include <string>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += std::abs(numbers[i] - mean(numbers));
    }
    return sum / numbers.size();
}