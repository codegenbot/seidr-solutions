#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxVal = nums[n - 1];
    leaders.push_back(maxVal);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxVal) {
            maxVal = nums[i];
            leaders.push_back(maxVal);
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
    
    vector<int> leaders = findLeaders(nums);
    
    cout << leaders.size() << endl;
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    
    return 0;
}