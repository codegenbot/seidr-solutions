#include <vector>
#include <iostream>
using namespace std;

vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int maxNum = INT_MIN;
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxNum) {
            maxNum = nums[i];
            leaders.push_back(maxNum);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = findLeaders(nums);
    
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}