#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i]; // Update maxRight
        }
    }
    
    leaders.push_back(nums[n-1]);
    return leaders;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    
    vector<int> result = findLeaders(nums);
    
    for (int leader : result) {
        cout << leader << " ";
    }
    
    return 0;
}