#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    int maxRight = nums[n-1];
    result.push_back(maxRight);
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            result.push_back(maxRight);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> result = leaders(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}