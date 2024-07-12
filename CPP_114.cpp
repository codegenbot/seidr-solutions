#include <vector>

using namespace std;

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long min_sum = LLONG_MAX;
    
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        
        if (i > 0) {
            sum -= nums[i - 1];
        }
        
        min_sum = min(min_sum, sum);
    }
    
    return min_sum;
}