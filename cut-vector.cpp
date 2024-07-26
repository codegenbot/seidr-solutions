#include <limits>

int n = nums.size();
int minDiff = std::numeric_limits<int>::max();
int cutSpot = -1;

for (int i = 1; i < n; ++i) {
    int sum1 = std::accumulate(nums.begin(), nums.begin() + i, 0);
    int sum2 = std::accumulate(nums.begin() + i, nums.end(), 0);
    int diff = std::abs(sum1 - sum2);

    if (diff < minDiff) {
        minDiff = diff;
        cutSpot = i;
    }
}