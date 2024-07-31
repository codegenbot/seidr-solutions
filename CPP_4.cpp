#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <cassert>

namespace std;

double mean_absolute_deviation(const vector<double>& values) {
    double mean = accumulate(values.begin(), values.end(), 0.0) / values.size();
    double sum_abs_diff = 0.0;

    for (const auto& value : values) {
        sum_abs_diff += abs(value - mean);
    }

    return sum_abs_diff / values.size();
}

int main() {
    assert(abs(mean_absolute_deviation(vector<double>{1.0, 2.0, 3.0, 4.0, 5.0}) - (6.0 / 5.0)) < 1e-4;

    return 0;
}