#include <iostream>
#include <vector>
#include <cmath>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    float mean;

    // Calculate the mean of the numbers
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    // Calculate the mean absolute deviation
    float mad = 0;
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    mad /= numbers.size();

    return mad;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0};
    float mad = mean_absolute_deviation(numbers);
    cout << mad << endl;

    return 0;
}