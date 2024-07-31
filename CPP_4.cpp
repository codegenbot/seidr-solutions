#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <cassert>

double mean_absolute_deviation(const std::vector<double>& values) {
    double mean = std::accumulate(values.begin(), values.end(), 0.0) / values.size();
    double sum_abs_diff = 0.0;

    for (const auto& value : values) {
        sum_abs_diff += std::abs(value - mean);
    }

    return sum_abs_diff / values.size();
}