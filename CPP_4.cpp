#include <iostream>
#include <vector>
#include <cmath>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0;
    float mean = 0.0;
    
    // Calculate the sum of all numbers
    for (float num : numbers) {
        sum += num;
    }
    
    // Calculate the mean of the dataset
    mean = sum / numbers.size();
    
    float mad = 0.0;
    
    // Calculate the mean absolute deviation
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