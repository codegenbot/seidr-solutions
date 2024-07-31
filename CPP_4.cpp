#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

class mean_absolute_deviation {
public:
    static double calculate_mad(const std::vector<double>& data) {
        double mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();
        double mad = 0.0;
        for (const auto& num : data) {
            mad += std::abs(num - mean);
        }
        return mad / data.size();
    }
};

int main() {
    assert(std::abs(mean_absolute_deviation::calculate_mad({1.0, 2.0, 3.0, 4.0, 5.0}) - (6.0 / 5.0)) < 1e-4);
    
    return 0;
}