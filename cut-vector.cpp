#include <vector>
#include <numeric>
#include <algorithm>
#include <utility>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i <= v.size(); i++) {
        int leftSum = std::accumulate(v.begin(), v.begin() + i, 0);
        int rightSum = std::accumulate(v.begin() + i, v.end(), 0);
        if (leftSum == rightSum) {
            return {{}, {v.begin(), v.end()}};
        } else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    int leftSum = 0, rightSum = 0;
    for (int j = 0; j < cutIndex; j++) {
        leftSum += v[j];
    }
    for (int j = cutIndex; j < v.size(); j++) {
        rightSum += v[j];
    }
    return std::pair<std::vector<int>, std::vector<int>>(std::vector<int>(v.begin(), v.begin() + cutIndex),
                                                         std::vector<int>(v.begin() + cutIndex, v.end()));
}