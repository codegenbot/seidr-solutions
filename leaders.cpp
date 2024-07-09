#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    
    leaders.push_back(nums[n-1]); // Rightmost element is always a leader
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= leaders.back()) {
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