#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

float mean_absolute_deviation(const vector<float>& numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float mad = 0.0;
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    mad /= numbers.size();

    return mad;
}