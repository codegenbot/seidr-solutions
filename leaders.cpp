#include <vector>
#include <iostream>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight && nums[i] >= leaders.back()) {
            leaders.push_back(nums[i]);
            maxRight = nums[i]; // Update maxRight
        }
    }
    
    leaders.push_back(nums[n-1]); // add the rightmost element as a leader
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