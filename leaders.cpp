#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxLeader = nums[n - 1];
    leaders.push_back(maxLeader);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    return vector<int>(leaders.rbegin(), leaders.rend());
}

int main() {
    vector<int> nums = {18, 577, 112, 438, 403, 861, 630, 159, 832, 157, 494, 492, 773, 516, 594, 530, 381, 54, 68};
    vector<int> leaders = findLeaders(nums);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}