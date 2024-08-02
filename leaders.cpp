#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> findLeaders(const vector<int> &nums) {
    vector<int> leaders;
    int maxRight = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= maxRight && (i == nums.size() - 1 || nums[i] >= nums[i + 1])) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    vector<int> result = findLeaders(nums);
    
    cout << "The leaders are: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}