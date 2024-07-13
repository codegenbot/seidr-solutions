#include <vector>
#include <numeric>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    long long leftSum = 0;
    for (int i = 0; i < v.size(); i++) {
        leftSum += v[i];
    }
    long long rightSum = leftSum;

    long long diff = std::numeric_limits<long long>::max();
    int pos = -1;
    for (int i = 0; i < v.size() - 1; i++) {
        rightSum -= v[i];
        if (std::abs(leftSum - rightSum) <= diff) {
            diff = std::abs(leftSum - rightSum);
            pos = i;
        }
    }
    return {{v.begin(), v.begin() + pos + 1}, {v.begin() + pos + 1, v.end()}};
}