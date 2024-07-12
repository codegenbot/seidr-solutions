#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numPoints;
    
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = abs(nums[i]);
        
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        
        numPoints.push_back({sumOfDigits, i});
    }
    
    sort(numPoints.begin(), numPoints.end());
    
    vector<int> result;
    
    for (int i = 0; i < numPoints.size(); i++) {
        if (i > 0 && numPoints[i] == numPoints[i - 1]) {
            continue;
        }
        
        result.push_back(nums[numPoints[i].second]);
    }
    
    return result;
}