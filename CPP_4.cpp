#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

float mean_absolute_deviation(const vector<float>& numbers) {
    if (numbers.empty()) return 0.0;

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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<float> numbers(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    cout << "Mean Absolute Deviation: " << mean_absolute_deviation(numbers) << endl;

    return 0;
}