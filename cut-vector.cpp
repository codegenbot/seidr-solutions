#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int index = 0;
    
    for(int i=1; i<nums.size(); i++) {
        int diff = abs(nums[i-1] - nums[i]);
        if(diff <= minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> left = vector<int>(nums.begin(), nums.begin() + index);
    vector<int> right = vector<int>(nums.begin() + index, nums.end());
    
    return {left, right};
}

int main() {
    // Example usage
    vector<int> nums1 = {1, 0};
    pair<vector<int>, vector<int>> result1 = cutVector(nums1);
    for(int num : result1.first) cout << num << " ";
    cout << endl;
    for(int num : result1.second) cout << num << " ";
    cout << endl;
    
    // Add more examples as needed
    return 0;
}