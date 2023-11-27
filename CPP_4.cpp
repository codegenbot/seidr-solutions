#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    float mean = 0;
    float deviation = 0;
    float mad = 0;

    // Calculate the sum of all numbers
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    // Calculate the mean
    mean = sum / numbers.size();

    // Calculate the sum of absolute differences
    for (int i = 0; i < numbers.size(); i++) {
        deviation += std::abs(numbers[i] - mean);
    }

    // Calculate the Mean Absolute Deviation
    mad = deviation / numbers.size();

    return mad;
}