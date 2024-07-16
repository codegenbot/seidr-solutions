#include <vector>
#include <utility>
#include <cmath>
#include <climits>
#include <numeric>

std::pair<std::vector<int>, std::vector<int>> findCutSpot(const std::vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 1; i < nums.size(); ++i) {
        int diff = std::abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return std::make_pair(std::vector<int>(nums.begin(), nums.begin() + cutIndex), std::vector<int>(nums.begin() + cutIndex, nums.end()));
}

int main() {
    return 0;
}