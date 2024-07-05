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
    vector<float> numbers;
    float input;
    
    // Reading input from user
    while (cin >> input) {
        numbers.push_back(input);
    }

    // Calculating and printing the result
    cout << mean_absolute_deviation(numbers) << endl;
    
    return 0;
}