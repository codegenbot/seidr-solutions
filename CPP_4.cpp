#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

float mean_absolute_deviation(const vector<float>& numbers) {
    if (numbers.empty()) return 0.0; // Handle empty vector edge case

    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float mad_sum = 0.0;
    for (float num : numbers) {
        mad_sum += fabs(num - mean);
    }

    return mad_sum / numbers.size();
}

int main() {
    assert(fabs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
    
    // Handle user input
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<float> numbers(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    float result = mean_absolute_deviation(numbers);
    cout << "Mean Absolute Deviation: " << result << endl;

    return 0;
}