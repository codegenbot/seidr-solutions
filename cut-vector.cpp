#include <vector>
#include <cmath>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    long long diff = numeric_limits<long long>::max();

    for (int i = 0; i < n; i++) {
        long long leftSum = 0, rightSum = 0;

        // sum of elements on the left side
        for (std::size_t j = 0; j <= i; j++) {
            leftSum += v[j];
        }

        // sum of elements on the right side
        for (std::size_t j = i + 1; j < n; j++) {
            rightSum += v[j];
        }

        if (abs(leftSum - rightSum) == diff) {
            return {{v.begin(), v.begin() + i + 1}, {v.begin() + i + 1, v.end()}};
        } else if (abs(leftSum - rightSum) < diff) {
            diff = abs(leftSum - rightSum);
        }
    }

    // If no cut found, return the original vector as both parts
    return {{v.begin(), v.end()}, {v.begin(), v.end()}};
}