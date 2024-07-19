#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numDigits;
    
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int n = abs(nums[i]);
        
        while (n > 0) {
            sumOfDigits += n % 10;
            n /= 10;
        }
        
        numDigits.emplace_back(sumOfDigits, nums[i]);
    }
    
    sort(numDigits.begin(), numDigits.end());
    
    vector<int> result;
    
    for (const auto& pair : numDigits) {
        result.push_back(pair.second);
    }
    
    return result;
}