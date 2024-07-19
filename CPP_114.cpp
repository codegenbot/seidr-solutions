#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;
    
    for (int i = 0; i < n; i++) {
        current_sum += nums[i];
        
        if (current_sum > 0) {
            min_sum = min(min_sum, current_sum);
        } else {
            current_sum = 0;
        }
    }
    
    return min_sum == LLONG_MAX ? 0 : min_sum;
}