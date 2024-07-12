#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int maxRight = INT_MIN;
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    return leaders;
}

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    vector<int> result = findLeaders(nums);
    
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }
    
    return 0;
}