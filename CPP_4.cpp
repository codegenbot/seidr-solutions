#include <iostream>
#include <vector>
#include <cmath>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += abs(num - mean);
    }
    float mad = deviation_sum / numbers.size();

    return mad;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0};
    float mad = mean_absolute_deviation(numbers);
    cout << mad << endl;

    return 0;
}