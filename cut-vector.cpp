#include <iostream>
#include <vector>
#include <numeric>
#include <utility>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int>& v) {
    int n = v.size();
    long long total_sum = accumulate(v.begin(), v.end(), 0LL);

    std::pair<long long, long long> prefix_sum = {{0LL}, {accumulate(v.begin(), v.end(), 0LL)}};

    int min_diff = INT_MAX;
    std::vector<int> left, right;

    for (int i = 0; i < n; ++i) {
        if (prefix_sum.second - prefix_sum.first >= total_sum / 2) {
            long long diff = abs(total_sum - 2 * prefix_sum.second);
            min_diff = std::min(min_diff, diff);
            left = std::vector<int>(v.begin(), v.begin() + i);
            right = std::vector<int>(v.begin() + i, v.end());
        }
    }

    return {{left}, {right}};
}