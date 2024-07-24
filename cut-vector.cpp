#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

void cutVector(const vector<int>& nums) {
    int n = nums.size();
    int cutIndex = 0;
    int minDiff = INT_MAX;

    for (int i = 1; i < n; i++) {
        int diff = abs(std::accumulate(nums.begin(), nums.begin() + i, 0) - std::accumulate(nums.begin() + i, nums.end(), 0));
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    for (int i = 0; i < cutIndex; i++) {
        cout << nums[i] << ' ';
    }
    cout << endl;
    for (int i = cutIndex; i < n; i++) {
        cout << nums[i] << ' ';
    }
}

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    cutVector(nums);

    return 0;
}