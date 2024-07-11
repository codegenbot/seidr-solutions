#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numSumIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        
        numSumIndex.push_back({sumOfDigits, i});
    }
    
    sort(numSumIndex.begin(), numSumIndex.end());
    
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        result.push_back(nums[numSumIndex[i].second]);
    }
    
    return result;
}