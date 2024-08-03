#include <algorithm>
using namespace std;

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numDigits;
    
    for (int i = 0; i < nums.size(); i++) {
        int digitSum = 0;
        int n = abs(nums[i]);
        
        while(n > 0) {
            digitSum += n % 10;
            n /= 10;
        }
        
        numDigits.push_back({digitSum, i});
    }
    
    sort(numDigits.begin(), numDigits.end());
    
    vector<int> result;
    
    for (const auto& p : numDigits) {
        result.push_back(nums[p.second]);
    }
    
    return result;
}