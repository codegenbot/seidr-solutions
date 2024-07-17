#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= nums.size(); i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j < i; j++) {
            sumLeft += nums[j];
        }
        
        for (int k = i; k < nums.size(); k++) {
            sumRight += nums[k];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + splitIndex);
    vector<int> right(nums.begin() + splitIndex, nums.end());
    return {left, right};
}