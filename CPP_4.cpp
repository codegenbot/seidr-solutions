#include <cmath>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0; // Initialize sum to zero
    for (float num : numbers) {
        sum += abs(num - mean(numbers)); // Calculate absolute difference and add to sum
    }
    return sum / numbers.size(); // Return the average of absolute differences
}

float mean(vector<float> numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += num; // Calculate the mean
    }
    return sum / numbers.size();
}