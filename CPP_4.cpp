#include <iostream>
#include <vector>
#include <numeric>
#include <cassert> 

using namespace std;

double calculate_mad(const vector<double>& values) {
    double mean = accumulate(values.begin(), values.end(), 0.0) / values.size();
    double sum_abs_diff = 0.0;

    for (const auto& value : values) {
        sum_abs_diff += std::abs(value - mean);
    }

    return sum_abs_diff / values.size();
}

int main() {
    assert(abs(calculate_mad(vector<double>{1.0, 2.0, 3.0, 4.0, 5.0}) - (6.0 / 5.0) < 1e-4);

    return 0;
}