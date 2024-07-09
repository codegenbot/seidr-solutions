#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>
using std::vector;
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] >= nums[n-1]) {
            leaders.push_back(nums[i]);
        }
    }

    return leaders;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(nums);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}