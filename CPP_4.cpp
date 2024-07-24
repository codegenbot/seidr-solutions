#include <cmath>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0; // sum of absolute deviations
    float mean = 0.0; // mean of the input numbers
    int n = numbers.size();

    // calculate the mean
    for (int i = 0; i < n; i++) {
        mean += numbers[i];
    }
    mean /= n;

    // calculate the sum of absolute deviations
    for (int i = 0; i < n; i++) {
        sum += abs(numbers[i] - mean);
    }

    return sum / n;
}