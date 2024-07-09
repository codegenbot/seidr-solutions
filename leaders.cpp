#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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
    vector<int> nums;
    int num;
    
    cout << "Enter positive integers (enter -1 to stop):\n";
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        nums.push_back(num);
    }
    
    vector<int> result = findLeaders(nums);
    
    cout << "Leaders: ";
    for (int leader : result) {
        cout << leader << " ";
    }
    cout << endl;
    
    return 0;
}