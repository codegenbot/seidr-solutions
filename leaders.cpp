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
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums1 = {7};
    vector<int> leaders1 = findLeaders(nums1);
    for (int leader : leaders1) {
        cout << leader << " ";
    }

    vector<int> nums2 = {18, 861, 832, 773, 594, 530, 381, 68};
    vector<int> leaders2 = findLeaders(nums2);
    for (int leader : leaders2) {
        cout << leader << " ";
    }

    vector<int> nums3 = {577, 112, 438, 403, 861, 630, 159, 832, 157, 494, 492, 773, 516, 594, 530, 381, 54, 68};
    vector<int> leaders3 = findLeaders(nums3);
    for (int leader : leaders3) {
        cout << leader << " ";
    }

    return 0;
}