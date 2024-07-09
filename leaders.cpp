#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using std::vector;
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    
    int maxRight = INT_MIN;
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (nums[i] < nums[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
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