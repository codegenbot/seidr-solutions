#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int> nums) {
    vector<int> leaders;
    int currentLeader = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > currentLeader) {
            leaders.push_back(nums[i]);
            currentLeader = nums[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> leaders = leaders(nums);
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << endl;
    return 0;
}