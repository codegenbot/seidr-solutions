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
        if (nums[i] > maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums = {5, 3, 15, 8, 12, 10};
    vector<int> leaders = findLeaders(nums);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}