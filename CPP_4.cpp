#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    // Calculate the mean
    float sum = 0;
    for (float num : numbers) {
       sum += num;
    }
    float mean = sum / numbers.size();
    
    // Calculate the sum of absolute differences
    float sum_diff = 0;
    for (float num : numbers) {
        sum_diff += abs(num - mean);
    }
    
    // Calculate the Mean Absolute Deviation
    float mad = sum_diff / numbers.size();
    return mad;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0};
    float mad = mean_absolute_deviation(numbers);
    cout << mad << endl;
    return 0;
}