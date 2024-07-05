#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

float mean_absolute_deviation(const vector<float>& numbers) {
    int n = numbers.size();
    if (n == 0) return 0.0;

    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / n;

    float mad_sum = 0.0;
    for (float num : numbers) {
        mad_sum += fabs(num - mean);
    }

    return mad_sum / n;
}

int main() {
    assert(abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    cout << "All tests passed!" << endl;
    return 0;
}