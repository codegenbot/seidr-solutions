#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0, mean;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    mean = sum / numbers.size();
    float mad = 0;
    for (int i = 0; i < numbers.size(); i++) {
        mad += abs(numbers[i] - mean);
    }
    return mad / numbers.size();
}