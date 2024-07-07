#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numPairs;
    
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        
        numPairs.emplace_back(sumOfDigits, i);
    }
    
    sort(numPairs.begin(), numPairs.end());
    
    vector<int> result;
    
    for (const auto& pair : numPairs) {
        result.push_back(nums[pair.second]);
    }
    
    return result;
}