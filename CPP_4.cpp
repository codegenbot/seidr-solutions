#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double mean_absolute_deviation(const vector<double>& numbers) {
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    double mean = sum / numbers.size();
    
    double deviation_sum = 0;
    for (double num : numbers) {
        deviation_sum += abs(num - mean);
    }
    return deviation_sum / numbers.size();
}

int main() {
    vector<double> numbers = {1.2, 2.4, 3.6, 4.8, 5.0};
    assert(abs(mean_absolute_deviation(numbers) - 6.0/5.0) < 1e-4);
    
    return 0;
}