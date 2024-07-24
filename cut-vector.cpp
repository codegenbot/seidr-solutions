#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < n; ++i) {
        int diff = abs(nums[i] - nums[0]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return {nums.begin(), nums.begin() + cutIndex} | {nums.begin() + cutIndex, nums.end()};
}

int main() {
    // Example inputs
    vector<int> nums1 = {1};
    vector<int> result1 = cutVector(nums1);
    cout << "Input: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Output: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {1, 10};
    vector<int> result2 = cutVector(nums2);
    cout << "Input: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Output: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    // Add more inputs here...
    
    return 0;
}