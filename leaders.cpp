#include <vector>
#include <climits>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;
    
    for (int i = n-1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
        if (cin.eof()) break; // Add this line to check for end of input
    }
    
    vector<int> result = findLeaders(nums);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}