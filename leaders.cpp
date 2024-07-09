#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>
using std::vector;
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();

    int maxRight = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i]; // Update maxRight to the current element
            leaders.push_back(nums[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());

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