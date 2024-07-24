#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;
  
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(nums);

    for (int leader : result) {
        cout << leader << " ";
    }

    cout << endl;
    
    return 0;
}