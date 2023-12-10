#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int> nums) {
    vector<int> leaders;
    int max = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > max) {
            max = nums[i];
            leaders.push_back(max);
        }
    }
    return leaders;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> result = leaders(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
