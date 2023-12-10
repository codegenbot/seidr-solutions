#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (abs(nums[i]) == abs(target)) {
            result.push_back(nums[i]);
            return result;
        }
    }
    return result;
}

int main() {
    vector<int> nums = { 5, 7 };
    int target = 12;
    vector<int> result = findPair(nums, target);
    cout << "The two elements that sum to the target are: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}