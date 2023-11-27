#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumOfDigitsA = 0, sumOfDigitsB = 0;
        int tempA = abs(a), tempB = abs(b);
        
        while (tempA > 0) {
            sumOfDigitsA += tempA % 10;
            tempA /= 10;
        }
        
        while (tempB > 0) {
            sumOfDigitsB += tempB % 10;
            tempB /= 10;
        }
        
        if (sumOfDigitsA != sumOfDigitsB) {
            return sumOfDigitsA < sumOfDigitsB;
        } else {
            return a < b;
        }
    });
    
    return nums;
}